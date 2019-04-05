#pragma once

#include "Common/Utils.h"
#include "Common/WeatherCalculator.h"

namespace CalculatorApp
{
    namespace ViewModel
    {
        [Windows::UI::Xaml::Data::Bindable]
        public ref class WeatherCalculatorViewModel sealed : public Windows::UI::Xaml::Data::INotifyPropertyChanged
        {
        public:
            WeatherCalculatorViewModel();

            OBSERVABLE_OBJECT_CALLBACK(OnPropertyChanged);

        private:
            void OnPropertyChanged(_In_ Platform::String^ prop);

        };



    }

}
