#pragma once

#include "Device.h"
#include "LightAdapter.h"

class Light : public Device {
public:
    Light();
    ~Light();

    LightAdapter* getAdapter();
    void setAdapter(LightAdapter* adapter);

    void poweron() override;
    void poweroff() override;

private:
    LightAdapter* adapter;
};