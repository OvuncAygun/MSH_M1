#pragma once

#include "PowerStrategy.hpp"

class Toggleable : public PowerStrategy {
public:
    Toggleable();
    ~Toggleable();

    void poweron() override;
    void poweroff() override;
};