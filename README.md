# UbiChroma - With Modifications
**Chroma** (developed by Ubisoft) helps in simulating different types of color blindness occurring in society.

## My Modifications
While UbiChroma is a wonderful piece of software just the way it is, I wanted to modify it so that it would more accurately reflect the way I, personally, experience the world.

I'm fairly new to shader languages - while modifying or even writing them doesn't seem too bad, the process of learning I needed to manually download and install Jim G Jones's HLSL Tools for Visual Studio (since whatever's supposed to be there by default..wasn't there for me - prolly a bad install), manually set the Properties of the HLSL shaders to be a Pixel Shader on version 5.0, and finally the compilation into a .h file when pointed to the right folder would result in the proper compilation of a shader to be included in the built application.

Since I'm just tuning this for myself I got a little hacky with it - instead of digging deeeeeep throughout the code to determine all the places I'd need to add new entries to the list of possible color blindnesses, I simply overwrote the display labels and compiled shaders for Deutan and Tritan to point at other Protan shaders, each using a different implementation and tuned until it closely matched my own experience.

I implemented the three following approaches into [the Protan Shader](https://github.com/agincel/UbiChroma/blob/main/source/shaders/ProtanPixelShader.hlsl), compiled it three separate times (once with each method used in protanMain individually), and hackily overrode the Tritan and Deutan .h files accordingly. I'm not necessarily proud of the approach, but it got me where I needed to go. The three approaches were...

## UbiChroma's Built-In Approach
The Built-in UbiChroma approach completely collapses the Red and Green channels to one value, guaranteeing that it can only simulate total red blindness, rather than red deficiency. The way around this (that seems to have been built-in but then circumvented internally) is to, as the final step of the pixel shader, lerp from the pixel's original color, to the simulated blindness color, by some percentage. I ended up settling on 0.4, so you could say that, by this method, I'm 40% red-deficient.

## Acerola's Approach
Acerola is the reason I'm not flying *entirely* blind with Shaders - his channel has long since been an inspiration, and his Discord's `#programming` channel was my helpful rubber duck while I sorted all of this out one Friday evening. His video on Color Blindness Simulation clued me in that there may be better alternative approaches to the UbiChroma simulation, prompting further research.

In [his repo](https://github.com/GarrettGunnell/Post-Processing/blob/main/Assets/Color%20Blindness/) there are 11 matrices for various degrees of red-deficiency. I found that these had a habit of coming across as "too dark" in the simulation, and so I went with the 3/10 blind matrix for this.

## Daltonization (really RGB -> LMS)
Technically, far as I can tell, calling this approach "Daltonization" is a misnomer, as Daltonization is the process of not just *simulating* colorblindness, but then trying to use the discrepancies between the standard vision and the deficient vision to create a "corrected" image that would enable the color deficient individual to better experience the world. Really interesting stuff I want to dive deeper into, but this version of the shader, based off of [this repo](https://gist.github.com/jcdickinson/580b7fb5cc145cee8740), just stops at the "simulating colorblindness" part. Though, similarly to the UbiChroma approach, the only Matrix applied for doing an operation in LMS color space was to effectively simulate total red-blindness. Instead of lerping the end pixel color I opted to lerp the matrix they provided from the "normal" matrix with 1.0s on the diagonal, effectively creating a continuum of matrices along the 0->1 red-blindness scale. It seemed to work well enough to my eyes, and I settled on around 0.45 with this approach.

# Conclusions
I'm really happy with this - I can now super quickly bring up this modified version of UbiChroma and show people in my life what I'm actually seeing, through a few different lenses that all get pretty close to an accurate end result! Huge thanks to Ubisoft for open sourcing UbiChroma, and to anyone else trying to do neat stuff with it, I guess reach out to me (contact at waveparadigm.com) if there's anything I can help with. The C++ side of this project is largely still a mystery, unfortunately.

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=



# Chroma

![03 Hero Asset - Secondary 1](https://github.com/user-attachments/assets/24da16ce-ee0d-42d2-a6c4-d3329086e095)

Main purpose of this is to simulate 3 major [Color Blindness](https://en.wikipedia.org/wiki/Color_blindness) types _Protanopia_, _Deuteranopia_ and _Tritanopia_ for our different games and aid accessibility team in performing various complex testing.

Following are key features:

- Color Simulation on single monitor. This solution works on top of game and can be maximized as per requirement.
- Work on all games. No dependency on any specific game or engine.
- High performance. Able to simulation live gameplay upto 60 FPS.
- Accurate results. 
- Simulation of all type of color blind forms.
- Only available solution which capture screen live gameplay screen and simulate.
- Easy screenshot to log error.
- Easy and configurable UI.




- For more details look into userguide [here](source/Userguide.pdf).
<br/>

**Download the official Chroma logos [here](assets/logos).**

## Known Issue During CMake Process
If you encounter the following error while running CMake without Visual Studio 2022:

```
error C2039: 'wait_for': is not a member of 'winrt::impl'
```

This issue may occur due to an outdated `CPPWinRT` library. To resolve it, install the `Microsoft.Windows.CppWinRT` NuGet package using the following command:

```sh
nuget install Microsoft.Windows.CppWinRT
```

Alternatively, ensure that your development environment is using an updated version of `CPPWinRT`. **The best option to avoid this issue is to use Visual Studio 2022.**
