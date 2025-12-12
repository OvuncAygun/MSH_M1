#pragma once

#include "PowerStrategy.h"

class Nontoggleable : public PowerStrategy {
public:
    Nontoggleable();
    ~Nontoggleable();

    void poweron() override;
    void poweroff() override;
};