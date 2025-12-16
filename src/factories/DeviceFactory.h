#pragma once

#include "IDeviceFactory.h"

class DeviceFactory : public IDeviceFactory {
public:
    DeviceFactory();
    ~DeviceFactory();

    IObserver* getObserver() override;
    void setObserver(IObserver* observer) override;

protected:
    IObserver* observer;
};