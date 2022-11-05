#include "gpio_mock.h"


int main(int argc, char *argv[])
{
    api::hal::gpio::GpioMock gpio;
    gpio.init("gpio_mock", "pin_0", api::hal::gpio::Direction::OUTPUT);
    return 0;
}
