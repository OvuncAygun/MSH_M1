#pragma once

#include "ChineseLight.h"

class LightAdapter {
public:
    LightAdapter();
    ~LightAdapter();

    ChineseLight* getAdaptee();
    void setAdaptee(ChineseLight* adaptee);

    void poweron();
    void poweroff();

    bool getPowerState();

private:
    ChineseLight* adaptee;
};