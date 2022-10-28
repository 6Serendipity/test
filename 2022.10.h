#pragma once

#include "_2022.g.h"

namespace winrt::github::implementation
{
    struct _2022 : _2022T<_2022>
    {
        _2022();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::github::factory_implementation
{
    struct _2022 : _2022T<_2022, implementation::_2022>
    {
    };
}
