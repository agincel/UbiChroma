// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Windows_Devices_WiFi_2_H
#define WINRT_Windows_Devices_WiFi_2_H
#include "winrt/impl/Windows.Devices.WiFi.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::WiFi
{
    struct WINRT_IMPL_EMPTY_BASES WiFiAdapter : winrt::Windows::Devices::WiFi::IWiFiAdapter,
        impl::require<WiFiAdapter, winrt::Windows::Devices::WiFi::IWiFiAdapter2>
    {
        WiFiAdapter(std::nullptr_t) noexcept {}
        WiFiAdapter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::WiFi::IWiFiAdapter(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Devices::WiFi::IWiFiAdapter::ConnectAsync;
        using impl::consume_t<WiFiAdapter, winrt::Windows::Devices::WiFi::IWiFiAdapter2>::ConnectAsync;
        static auto FindAllAdaptersAsync();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto RequestAccessAsync();
    };
    struct WINRT_IMPL_EMPTY_BASES WiFiAvailableNetwork : winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork
    {
        WiFiAvailableNetwork(std::nullptr_t) noexcept {}
        WiFiAvailableNetwork(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::WiFi::IWiFiAvailableNetwork(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES WiFiConnectionResult : winrt::Windows::Devices::WiFi::IWiFiConnectionResult
    {
        WiFiConnectionResult(std::nullptr_t) noexcept {}
        WiFiConnectionResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::WiFi::IWiFiConnectionResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES WiFiNetworkReport : winrt::Windows::Devices::WiFi::IWiFiNetworkReport
    {
        WiFiNetworkReport(std::nullptr_t) noexcept {}
        WiFiNetworkReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::WiFi::IWiFiNetworkReport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES WiFiWpsConfigurationResult : winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult
    {
        WiFiWpsConfigurationResult(std::nullptr_t) noexcept {}
        WiFiWpsConfigurationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::WiFi::IWiFiWpsConfigurationResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
