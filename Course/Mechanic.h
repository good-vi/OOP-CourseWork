#ifndef MECHANIC_H
#define MECHANIC_H

#include "ExponentialDistribution.h"
#include <memory>
typedef unsigned minute;

class Mechanic
{
public:
    Mechanic( double mechanicsRepairingTimeMean );
    void startRepairMachine ( minute repairingStartTime );
    bool IsWorkFinished ( minute currentTime );
private:
    static std::unique_ptr<ExponentialDistribution> mechanicsRepairingTimeDistribution;
    minute repairingStartTime_;
    minute reparingTime_;
};

#endif // MECHANIC_H
