#pragma once

#include "MainWindow.g.h"

namespace winrt::help_PTR::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        //void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
        //void rc_RefreshRequested(winrt::Microsoft::UI::Xaml::Controls::RefreshContainer const& sender, winrt::Microsoft::UI::Xaml::Controls::RefreshRequestedEventArgs const& args);
        void rc_RefreshRequested(winrt::Microsoft::UI::Xaml::Controls::RefreshContainer const& sender, winrt::Microsoft::UI::Xaml::Controls::RefreshRequestedEventArgs const& args);
    };
}

namespace winrt::help_PTR::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
