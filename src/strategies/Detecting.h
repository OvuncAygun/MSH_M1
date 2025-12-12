#pragma once

#include "DetectorStrategy.h"

class Detecting : public DetectorStrategy {
public:
    Detecting();
    ~Detecting();

    void detect() override;
};