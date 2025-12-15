#pragma once

#include "PowerStrategy.h"

class Nontoggleable : public PowerStrategy {
public:
    Nontoggleable();
    ~Nontoggleable();

    void poweron(bool* powerState) override;
    void poweroff(bool* powerState) override;
};