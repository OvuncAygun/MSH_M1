#pragma once

#include "PowerStrategy.h"

class Toggleable : public PowerStrategy {
public:
    Toggleable();
    ~Toggleable();

    void poweron(bool* powerState) override;
    void poweroff(bool* powerState) override;
};