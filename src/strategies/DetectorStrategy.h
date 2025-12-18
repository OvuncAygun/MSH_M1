#pragma once

class DetectorStrategy {
public:
    DetectorStrategy() {};
    virtual ~DetectorStrategy() {};

    virtual void detect() = 0;
};