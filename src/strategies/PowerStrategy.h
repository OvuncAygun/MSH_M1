#pragma once

class PowerStrategy {
public:
    PowerStrategy();
    virtual ~PowerStrategy() = 0;

    virtual void poweron(bool* powerState) = 0;
    virtual void poweroff(bool* powerState) = 0;
};