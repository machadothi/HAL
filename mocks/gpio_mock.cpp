#include <iostream>

#include "gpio_mock.h"

namespace api{
namespace hal{
namespace gpio{

GpioMock::GpioMock()
{

}

GpioMock::~GpioMock()
{

}

void GpioMock::init(const std::string &name, 
        const std::string &pin, 
        Direction dir)
{
    std::cout << "testing" << std::endl;
}

PinValue GpioMock::read()
{
    std::cout << "testing" << std::endl;

    return PinValue::HIGH;
}

void GpioMock::write(PinValue value)
{
    std::cout << "testing" << std::endl;
}

}; // namespace gpio
}; // namespace hal
}; // namespace api