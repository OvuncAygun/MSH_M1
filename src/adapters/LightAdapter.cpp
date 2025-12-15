#include "LightAdapter.h"

LightAdapter::LightAdapter() = default;
LightAdapter::~LightAdapter() = default;

ChineseLight* LightAdapter::getAdaptee() {
    return adaptee;
}
void LightAdapter::setAdaptee(ChineseLight* adaptee) {
    this->adaptee = adaptee;
}

void LightAdapter::poweron() {
    adaptee->turnOn();
}

void LightAdapter::poweroff() {
    adaptee->turnOff();
}

bool LightAdapter::getPowerState() {
    return adaptee->toggleState;
}