#include "ChineseLight.h"

ChineseLight::ChineseLight() = default;
ChineseLight::~ChineseLight() = default;


bool ChineseLight::turnOn() {
    toggleState = true;
    return toggleState;
}

bool ChineseLight::turnOff() {
    toggleState = false;
    return toggleState;
}

