#pragma once

class ChineseLight {
public:
    ChineseLight();
    ~ChineseLight();

    bool turnOn();
    bool turnOff();
    bool toggleState;
};