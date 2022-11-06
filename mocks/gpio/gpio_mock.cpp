#include <iostream>

#include "gpio_mock.h"

namespace {
std::string direction(api::hal::gpio::Direction dir)
{
    switch (dir)
    {
    case api::hal::gpio::Direction::OUTPUT:
        return "OUTPUT";

    case api::hal::gpio::Direction::INPUT:
        return "INPUT";
    
    default:
        return "UNKNOWN";
    }
}
};

namespace api {
namespace hal {
namespace gpio {

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
    std::cout << "gpio name: " <<  name << std::endl;
    std::cout << "gpio pin: " <<  pin << std::endl;
    std::cout << "gpio direction: " << direction(dir) << std::endl;
}

PinValue GpioMock::read()
{
    std::cout << "testing read function" << std::endl;

    return PinValue::HIGH;
}

void GpioMock::write(PinValue value)
{
    std::cout << "testing write function. Value: " << (int) value << std::endl;
}

}; // namespace gpio
}; // namespace hal
}; // namespace api