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

private:
    ChineseLight* adaptee;
};