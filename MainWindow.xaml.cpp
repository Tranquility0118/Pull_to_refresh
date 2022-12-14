#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::help_PTR::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    /*void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }*/
}


/*void winrt::help_PTR::implementation::MainWindow::rc_RefreshRequested(winrt::Microsoft::UI::Xaml::Controls::RefreshContainer const& sender, winrt::Microsoft::UI::Xaml::Controls::RefreshRequestedEventArgs const& args)
{

}*/


void winrt::help_PTR::implementation::MainWindow::rc_RefreshRequested(winrt::Microsoft::UI::Xaml::Controls::RefreshContainer const& sender, winrt::Microsoft::UI::Xaml::Controls::RefreshRequestedEventArgs const& args)
{
    lv().Items().Append(box_value(L"New information on the Top"));
    lv().Items().InsertAt(0, box_value(L"New information on the Bottom"));
}
