#pragma once

#include "DetectorStrategy.hpp"

class Detecting : public DetectorStrategy {
public:
    Detecting();
    ~Detecting();

    void detect() override;
};