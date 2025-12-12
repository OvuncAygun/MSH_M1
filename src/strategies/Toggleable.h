#pragma once

#include "PowerStrategy.h"

class Toggleable : public PowerStrategy {
public:
    Toggleable();
    ~Toggleable();

    void poweron() override;
    void poweroff() override;
};