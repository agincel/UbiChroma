// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Windows_Storage_Provider_2_H
#define WINRT_Windows_Storage_Provider_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Provider
{
    struct CachedFileUpdater
    {
        CachedFileUpdater() = delete;
        static auto SetUpdateInformation(winrt::Windows::Storage::IStorageFile const& file, param::hstring const& contentId, winrt::Windows::Storage::Provider::ReadActivationMode const& readMode, winrt::Windows::Storage::Provider::WriteActivationMode const& writeMode, winrt::Windows::Storage::Provider::CachedFileOptions const& options);
    };
    struct WINRT_IMPL_EMPTY_BASES CachedFileUpdaterUI : winrt::Windows::Storage::Provider::ICachedFileUpdaterUI,
        impl::require<CachedFileUpdaterUI, winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        CachedFileUpdaterUI(std::nullptr_t) noexcept {}
        CachedFileUpdaterUI(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Provider::ICachedFileUpdaterUI(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FileUpdateRequest : winrt::Windows::Storage::Provider::IFileUpdateRequest,
        impl::require<FileUpdateRequest, winrt::Windows::Storage::Provider::IFileUpdateRequest2>
    {
        FileUpdateRequest(std::nullptr_t) noexcept {}
        FileUpdateRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Provider::IFileUpdateRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FileUpdateRequestDeferral : winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral
    {
        FileUpdateRequestDeferral(std::nullptr_t) noexcept {}
        FileUpdateRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FileUpdateRequestedEventArgs : winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs
    {
        FileUpdateRequestedEventArgs(std::nullptr_t) noexcept {}
        FileUpdateRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES StorageProviderFileTypeInfo : winrt::Windows::Storage::Provider::IStorageProviderFileTypeInfo
    {
        StorageProviderFileTypeInfo(std::nullptr_t) noexcept {}
        StorageProviderFileTypeInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Provider::IStorageProviderFileTypeInfo(ptr, take_ownership_from_abi) {}
        StorageProviderFileTypeInfo(param::hstring const& fileExtension, param::hstring const& iconResource);
    };
    struct WINRT_IMPL_EMPTY_BASES StorageProviderGetContentInfoForPathResult : winrt::Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult
    {
        StorageProviderGetContentInfoForPathResult(std::nullptr_t) noexcept {}
        StorageProviderGetContentInfoForPathResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult(ptr, take_ownership_from_abi) {}
        StorageProviderGetContentInfoForPathResult();
    };
    struct WINRT_IMPL_EMPTY_BASES StorageProviderGetPathForContentUriResult : winrt::Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult
    {
        StorageProviderGetPathForContentUriResult(std::nullptr_t) noexcept {}
        StorageProviderGetPathForContentUriResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult(ptr, take_ownership_from_abi) {}
        StorageProviderGetPathForContentUriResult();
    };
    struct StorageProviderItemProperties
    {
        StorageProviderItemProperties() = delete;
        static auto SetAsync(winrt::Windows::Storage::IStorageItem const& item, param::async_iterable<winrt::Windows::Storage::Provider::StorageProviderItemProperty> const& itemProperties);
    };
    struct WINRT_IMPL_EMPTY_BASES StorageProviderItemProperty : winrt::Windows::Storage::Provider::IStorageProviderItemProperty
    {
        StorageProviderItemProperty(std::nullptr_t) noexcept {}
        StorageProviderItemProperty(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Provider::IStorageProviderItemProperty(ptr, take_ownership_from_abi) {}
        StorageProviderItemProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES StorageProviderItemPropertyDefinition : winrt::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition
    {
        StorageProviderItemPropertyDefinition(std::nullptr_t) noexcept {}
        StorageProviderItemPropertyDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition(ptr, take_ownership_from_abi) {}
        StorageProviderItemPropertyDefinition();
    };
    struct WINRT_IMPL_EMPTY_BASES StorageProviderSyncRootInfo : winrt::Windows::Storage::Provider::IStorageProviderSyncRootInfo,
        impl::require<StorageProviderSyncRootInfo, winrt::Windows::Storage::Provider::IStorageProviderSyncRootInfo2, winrt::Windows::Storage::Provider::IStorageProviderSyncRootInfo3>
    {
        StorageProviderSyncRootInfo(std::nullptr_t) noexcept {}
        StorageProviderSyncRootInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Provider::IStorageProviderSyncRootInfo(ptr, take_ownership_from_abi) {}
        StorageProviderSyncRootInfo();
    };
    struct StorageProviderSyncRootManager
    {
        StorageProviderSyncRootManager() = delete;
        static auto Register(winrt::Windows::Storage::Provider::StorageProviderSyncRootInfo const& syncRootInformation);
        static auto Unregister(param::hstring const& id);
        static auto GetSyncRootInformationForFolder(winrt::Windows::Storage::IStorageFolder const& folder);
        static auto GetSyncRootInformationForId(param::hstring const& id);
        static auto GetCurrentSyncRoots();
        static auto IsSupported();
    };
}
#endif
