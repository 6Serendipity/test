#include "pch.h"
#include "_2022.h"
#if __has_include("_2022.g.cpp")
#include "_2022.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::github::implementation
{
    _2022::_2022()
    {
        InitializeComponent();
    }

    int32_t _2022::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void _2022::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void _2022::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
