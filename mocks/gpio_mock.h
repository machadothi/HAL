#ifndef GPIO_MOCK_H_
#define GPIO_MOCK_H_

#include "IGpio.h"

namespace api{
namespace hal{
namespace gpio{


class GpioMock : public IGpio
{
public:
    GpioMock();
    ~GpioMock();

    void init(const std::string &name, 
        const std::string &pin, 
        Direction dir) override;

    PinValue read() override;

    void write(PinValue value) override;
protected:
};

}; // namespace gpio
}; // namespace hal
}; // namespace api

#endif /* GPIO_MOCK_H_ */