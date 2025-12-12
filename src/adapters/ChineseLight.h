#pragma once

class ChineseLight {
public:
    ChineseLight();
    ~ChineseLight();

    void turnOn();
    void turnOff();

private:
    bool toggleState;

};