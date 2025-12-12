#pragma once

class PowerStrategy {
public:
    PowerStrategy();
    virtual ~PowerStrategy() = 0;

    virtual void poweron() = 0;
    virtual void poweroff() = 0;
};