// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Windows_AI_MachineLearning_2_H
#define WINRT_Windows_AI_MachineLearning_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.AI.MachineLearning.1.h"
WINRT_EXPORT namespace winrt::Windows::AI::MachineLearning
{
    struct WINRT_IMPL_EMPTY_BASES ImageFeatureDescriptor : winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor,
        impl::require<ImageFeatureDescriptor, winrt::Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        ImageFeatureDescriptor(std::nullptr_t) noexcept {}
        ImageFeatureDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::IImageFeatureDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ImageFeatureValue : winrt::Windows::AI::MachineLearning::IImageFeatureValue,
        impl::require<ImageFeatureValue, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue>
    {
        ImageFeatureValue(std::nullptr_t) noexcept {}
        ImageFeatureValue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::IImageFeatureValue(ptr, take_ownership_from_abi) {}
        static auto CreateFromVideoFrame(winrt::Windows::Media::VideoFrame const& image);
    };
    struct WINRT_IMPL_EMPTY_BASES LearningModel : winrt::Windows::AI::MachineLearning::ILearningModel,
        impl::require<LearningModel, winrt::Windows::Foundation::IClosable>
    {
        LearningModel(std::nullptr_t) noexcept {}
        LearningModel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ILearningModel(ptr, take_ownership_from_abi) {}
        static auto LoadFromStorageFileAsync(winrt::Windows::Storage::IStorageFile const& modelFile);
        static auto LoadFromStreamAsync(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream);
        static auto LoadFromFilePath(param::hstring const& filePath);
        static auto LoadFromStream(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream);
        static auto LoadFromStorageFileAsync(winrt::Windows::Storage::IStorageFile const& modelFile, winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider);
        static auto LoadFromStreamAsync(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream, winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider);
        static auto LoadFromFilePath(param::hstring const& filePath, winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider);
        static auto LoadFromStream(winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& modelStream, winrt::Windows::AI::MachineLearning::ILearningModelOperatorProvider const& operatorProvider);
    };
    struct WINRT_IMPL_EMPTY_BASES LearningModelBinding : winrt::Windows::AI::MachineLearning::ILearningModelBinding,
        impl::require<LearningModelBinding, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Foundation::IInspectable>>, winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Foundation::IInspectable>>
    {
        LearningModelBinding(std::nullptr_t) noexcept {}
        LearningModelBinding(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ILearningModelBinding(ptr, take_ownership_from_abi) {}
        explicit LearningModelBinding(winrt::Windows::AI::MachineLearning::LearningModelSession const& session);
    };
    struct WINRT_IMPL_EMPTY_BASES LearningModelDevice : winrt::Windows::AI::MachineLearning::ILearningModelDevice
    {
        LearningModelDevice(std::nullptr_t) noexcept {}
        LearningModelDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ILearningModelDevice(ptr, take_ownership_from_abi) {}
        explicit LearningModelDevice(winrt::Windows::AI::MachineLearning::LearningModelDeviceKind const& deviceKind);
        static auto CreateFromDirect3D11Device(winrt::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice const& device);
    };
    struct WINRT_IMPL_EMPTY_BASES LearningModelEvaluationResult : winrt::Windows::AI::MachineLearning::ILearningModelEvaluationResult
    {
        LearningModelEvaluationResult(std::nullptr_t) noexcept {}
        LearningModelEvaluationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ILearningModelEvaluationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES LearningModelSession : winrt::Windows::AI::MachineLearning::ILearningModelSession,
        impl::require<LearningModelSession, winrt::Windows::Foundation::IClosable>
    {
        LearningModelSession(std::nullptr_t) noexcept {}
        LearningModelSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ILearningModelSession(ptr, take_ownership_from_abi) {}
        explicit LearningModelSession(winrt::Windows::AI::MachineLearning::LearningModel const& model);
        LearningModelSession(winrt::Windows::AI::MachineLearning::LearningModel const& model, winrt::Windows::AI::MachineLearning::LearningModelDevice const& deviceToRunOn);
        LearningModelSession(winrt::Windows::AI::MachineLearning::LearningModel const& model, winrt::Windows::AI::MachineLearning::LearningModelDevice const& deviceToRunOn, winrt::Windows::AI::MachineLearning::LearningModelSessionOptions const& learningModelSessionOptions);
    };
    struct WINRT_IMPL_EMPTY_BASES LearningModelSessionOptions : winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions,
        impl::require<LearningModelSessionOptions, winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions2>
    {
        LearningModelSessionOptions(std::nullptr_t) noexcept {}
        LearningModelSessionOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ILearningModelSessionOptions(ptr, take_ownership_from_abi) {}
        LearningModelSessionOptions();
    };
    struct WINRT_IMPL_EMPTY_BASES MapFeatureDescriptor : winrt::Windows::AI::MachineLearning::IMapFeatureDescriptor,
        impl::require<MapFeatureDescriptor, winrt::Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        MapFeatureDescriptor(std::nullptr_t) noexcept {}
        MapFeatureDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::IMapFeatureDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SequenceFeatureDescriptor : winrt::Windows::AI::MachineLearning::ISequenceFeatureDescriptor,
        impl::require<SequenceFeatureDescriptor, winrt::Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        SequenceFeatureDescriptor(std::nullptr_t) noexcept {}
        SequenceFeatureDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ISequenceFeatureDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES TensorBoolean : winrt::Windows::AI::MachineLearning::ITensorBoolean,
        impl::require<TensorBoolean, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorBoolean(std::nullptr_t) noexcept {}
        TensorBoolean(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorBoolean(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<bool const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<bool> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<bool const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorDouble : winrt::Windows::AI::MachineLearning::ITensorDouble,
        impl::require<TensorDouble, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorDouble(std::nullptr_t) noexcept {}
        TensorDouble(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorDouble(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<double const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<double> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<double const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorFeatureDescriptor : winrt::Windows::AI::MachineLearning::ITensorFeatureDescriptor,
        impl::require<TensorFeatureDescriptor, winrt::Windows::AI::MachineLearning::ILearningModelFeatureDescriptor>
    {
        TensorFeatureDescriptor(std::nullptr_t) noexcept {}
        TensorFeatureDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorFeatureDescriptor(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES TensorFloat : winrt::Windows::AI::MachineLearning::ITensorFloat,
        impl::require<TensorFloat, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorFloat(std::nullptr_t) noexcept {}
        TensorFloat(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorFloat(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<float const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<float> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<float const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorFloat16Bit : winrt::Windows::AI::MachineLearning::ITensorFloat16Bit,
        impl::require<TensorFloat16Bit, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorFloat16Bit(std::nullptr_t) noexcept {}
        TensorFloat16Bit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorFloat16Bit(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<float const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<float> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<float const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorInt16Bit : winrt::Windows::AI::MachineLearning::ITensorInt16Bit,
        impl::require<TensorInt16Bit, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorInt16Bit(std::nullptr_t) noexcept {}
        TensorInt16Bit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorInt16Bit(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<int16_t const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int16_t> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int16_t const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorInt32Bit : winrt::Windows::AI::MachineLearning::ITensorInt32Bit,
        impl::require<TensorInt32Bit, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorInt32Bit(std::nullptr_t) noexcept {}
        TensorInt32Bit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorInt32Bit(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<int32_t const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int32_t> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int32_t const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorInt64Bit : winrt::Windows::AI::MachineLearning::ITensorInt64Bit,
        impl::require<TensorInt64Bit, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorInt64Bit(std::nullptr_t) noexcept {}
        TensorInt64Bit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorInt64Bit(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<int64_t const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<int64_t> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<int64_t const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorInt8Bit : winrt::Windows::AI::MachineLearning::ITensorInt8Bit,
        impl::require<TensorInt8Bit, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorInt8Bit(std::nullptr_t) noexcept {}
        TensorInt8Bit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorInt8Bit(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint8_t const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint8_t> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint8_t const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorString : winrt::Windows::AI::MachineLearning::ITensorString,
        impl::require<TensorString, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorString(std::nullptr_t) noexcept {}
        TensorString(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorString(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<hstring const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<hstring> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<hstring const> data);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorUInt16Bit : winrt::Windows::AI::MachineLearning::ITensorUInt16Bit,
        impl::require<TensorUInt16Bit, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorUInt16Bit(std::nullptr_t) noexcept {}
        TensorUInt16Bit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorUInt16Bit(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint16_t const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint16_t> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint16_t const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorUInt32Bit : winrt::Windows::AI::MachineLearning::ITensorUInt32Bit,
        impl::require<TensorUInt32Bit, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorUInt32Bit(std::nullptr_t) noexcept {}
        TensorUInt32Bit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorUInt32Bit(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint32_t const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint32_t> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint32_t const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorUInt64Bit : winrt::Windows::AI::MachineLearning::ITensorUInt64Bit,
        impl::require<TensorUInt64Bit, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorUInt64Bit(std::nullptr_t) noexcept {}
        TensorUInt64Bit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorUInt64Bit(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint64_t const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint64_t> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint64_t const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct WINRT_IMPL_EMPTY_BASES TensorUInt8Bit : winrt::Windows::AI::MachineLearning::ITensorUInt8Bit,
        impl::require<TensorUInt8Bit, winrt::Windows::AI::MachineLearning::ILearningModelFeatureValue, winrt::Windows::AI::MachineLearning::ITensor, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        TensorUInt8Bit(std::nullptr_t) noexcept {}
        TensorUInt8Bit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::MachineLearning::ITensorUInt8Bit(ptr, take_ownership_from_abi) {}
        static auto Create();
        static auto Create(param::iterable<int64_t> const& shape);
        static auto CreateFromArray(param::iterable<int64_t> const& shape, array_view<uint8_t const> data);
        static auto CreateFromIterable(param::iterable<int64_t> const& shape, param::iterable<uint8_t> const& data);
        static auto CreateFromShapeArrayAndDataArray(array_view<int64_t const> shape, array_view<uint8_t const> data);
        static auto CreateFromBuffer(array_view<int64_t const> shape, winrt::Windows::Storage::Streams::IBuffer const& buffer);
    };
}
#endif
