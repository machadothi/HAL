#include <iostream>

#include "gpio_mock.h"

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
    }

    api::hal::gpio::GpioMock gpio;
    gpio.init("gpio_mock", "pin_0", api::hal::gpio::Direction::OUTPUT);
    return 0;
}
