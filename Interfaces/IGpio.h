#ifndef IGPIO_H_
#define IGPIO_H_

#include <cstdint>
#include <string>

namespace api{
namespace hal{
namespace gpio{

enum class Direction
{
    UNKNOWN,
    OUTPUT,
    INPUT
};

enum class PinValue
{
    LOW,
    HIGH
};

class IGpio
{
public:
    virtual void init(const std::string &name, 
        const std::string &pin, 
        Direction dir) = 0;

    virtual PinValue read() = 0;

    virtual void write(PinValue value) = 0;

protected:
};

}; // namespace gpio
}; // namespace hal
}; // namespace api

#endif /* IGPIO_H_ */