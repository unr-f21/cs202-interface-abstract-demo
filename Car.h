//
// Created by Keith Lancaster on 10/7/21.
//

#ifndef CS202_INTERFACES__CAR_H
#define CS202_INTERFACES__CAR_H


#include "Vehicle.h"

class Car : public Vehicle {
public:
    void accelerate() override;

    void run() override;

    void stop() override;

};


#endif //CS202_INTERFACES__CAR_H
