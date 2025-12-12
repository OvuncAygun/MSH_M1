#pragma once

#include "DetectorStrategy.h"

class Nondetecting : public DetectorStrategy {
public:
    Nondetecting();
    ~Nondetecting();

    void detect() override;
};