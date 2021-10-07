
#ifndef BOAT_H
#define BOAT_H

#include <string>
#include "Vehicle.h"
#include "IRunnable.h"
#include "ISinkable.h"

class Boat : public Vehicle/*, public IRunnable, public ISinkable*/ {

public:
//    void sink() override;
    void accelerate() override;
};


#endif
