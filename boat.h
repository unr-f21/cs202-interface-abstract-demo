
#ifndef BOAT_H
#define BOAT_H

#include <string>
#include <iostream>
#include "Vehicle.h"
#include "IRunnable.h"
#include "ISinkable.h"

class Boat : public Vehicle, public ISinkable {

public:
    ~Boat() override{
        std::cout << "in the boat destructor" << std::endl;
    }
    void accelerate() override;

    void run() override;

    void stop() override;

    void sink() override;
};


#endif
