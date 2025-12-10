#pragma once

#include "DetectorStrategy.hpp"

class Nondetecting : public DetectorStrategy {
public:
    Nondetecting();
    ~Nondetecting();

    void detect() override;
};