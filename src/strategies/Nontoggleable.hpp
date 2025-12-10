#pragma once

#include "PowerStrategy.hpp"

class Nontoggleable : public PowerStrategy {
public:
    Nontoggleable();
    ~Nontoggleable();

    void poweron() override;
    void poweroff() override;
};