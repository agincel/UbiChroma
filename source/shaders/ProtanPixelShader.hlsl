
//Define 2D Texture and Sampler State
Texture2D <float4> g_accessibilityTexture;

SamplerState g_samLinear;

int simulationType : register(c0);

//Define Input type : NORMAL, TEXCOORD0 means from vertex shader
struct PS_INPUT
{
    float3 vNormal		: NORMAL;
    float2 vTexcoord	: TEXCOORD0;
};

float3 rgb2lin(float3 c) { return (0.992052 * pow(c, 2.2) + 0.003974) * 128.498039; }
float3 lin2rgb(float3 c) { return pow(c, 0.45454545); }

float3 Daltonize(float3 input, float amountBlind)
{
    // https://gist.github.com/jcdickinson/580b7fb5cc145cee8740
    const float3x3 RGB_TO_LMS =
    {
        17.8824, 43.5161, 4.11935,
		 3.45565, 27.1554, 3.86714,
		 0.0299566, 0.184309, 1.46709
    };
    
    const float3x3 LMS_TO_RGB =
    {
        0.0809444479, -0.130504409, 0.116721066,
		-0.0102485335, 0.0540193266, -0.113614708,
		-0.000365296938, -0.00412161469, 0.693511405
    };
    
    const float3x3 PROTANOPIA =
    {
         0.0, 2.02344, -2.52581,
		 0.0, 1.0, 0.0,
		 0.0, 0.0, 1.0
    };
    
    const float3x3 NORMAL =
    {
        1.0, 0.0, 0.0,
        0.0, 1.0, 0.0,
        0.0, 0.0, 1.0
    };
    
    // To simulate protanomaly instead of protanopia lerp from Normal (0) to Protanope (1)
    const float3x3 PROTANOMALY = lerp(PROTANOPIA, NORMAL, saturate(amountBlind));
    
    // RGB to LMS matrix conversion
    float3 lmsColor = mul(RGB_TO_LMS, input.rgb);
    
    // Simulate Blindness
    float3 blindLmsColor = mul(PROTANOMALY, lmsColor);
    
    // Convert back to RGB
    return mul(LMS_TO_RGB, blindLmsColor);
}

float3 acerolaCB(float3 color)
{
    // https://github.com/GarrettGunnell/Post-Processing/blob/main/Assets/Color%20Blindness/Protanomaly.cginc
    float3x3 blindness = // protanomaly03
    {
        0.630323, 0.465641, -0.095964,
        0.069181, 0.890046, 0.040773,
       -0.006308, -0.007724, 1.014032
    };
    
    float3 cb = mul(blindness, color.rgb);
    return float4(saturate(cb), 1.0f);
}

float3 protanDeutanFilter(int k1, int k2, int k3, float3 color, float amountBlind) {
    color = saturate(color);
    float3 c_lin = rgb2lin(color);

    float r_blind = (k1 * c_lin.r + k2 * c_lin.g) / 16448.25098;
    float b_blind = (k3 * c_lin.r - k3 * c_lin.g + 128.498039 * c_lin.b) / 16448.25098;
    r_blind = saturate(r_blind);
    b_blind = saturate(b_blind);

    return lerp(color, lin2rgb(float3(r_blind, r_blind, b_blind)), amountBlind);
}

float3 protanMain(PS_INPUT Input) : SV_TARGET
{
    float3 color = g_accessibilityTexture.Sample(g_samLinear, Input.vTexcoord);
    return protanDeutanFilter(14.443137, 114.054902, 0.513725, color, 0.4f);
    //return acerolaCB(color);
    //return Daltonize(color, 0.45f);
}