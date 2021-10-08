//
// Created by Keith Lancaster on 10/7/21.
//

#ifndef CS202_INTERFACES_VEHICLE_H
#define CS202_INTERFACES_VEHICLE_H


#include <string>
#include "IRunnable.h"
#include "ISinkable.h"

class Vehicle : public IRunnable{
protected:
    std::string color;
    int age;
public:
    virtual void accelerate() = 0;

    const std::string &getColor() const;

    void setColor(const std::string &color);

    int getAge() const;

    void setAge(int age);

    virtual ~Vehicle();

};


#endif //CS202_INTERFACES_VEHICLE_H
