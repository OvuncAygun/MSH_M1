#include "Light.h"

Light::Light() = default;
Light::~Light() = default;

LightAdapter* Light::getAdapter() {
    return adapter;
}

void Light::setAdapter(LightAdapter* adapter) {
    this->adapter = adapter;
}

void Light::poweron() {
    adapter->poweron();
    powerState = adapter->getPowerState();
}

void Light::poweroff() {
    adapter->poweroff();
    powerState = adapter->getPowerState();
}