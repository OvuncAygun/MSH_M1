#include "Toggleable.h"

Toggleable::Toggleable() = default;
Toggleable::~Toggleable() = default;

void Toggleable::poweron(bool* powerState) {
    *powerState = true;
}

void Toggleable::poweroff(bool* powerState) {
    *powerState = false;
}