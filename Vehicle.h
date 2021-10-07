//
// Created by Keith Lancaster on 10/7/21.
//

#ifndef CS202_LAB6_INHERITANCE_VEHICLE_H
#define CS202_LAB6_INHERITANCE_VEHICLE_H


#include <string>

class Vehicle {
protected:
    std::string color;
    int age;
public:
    virtual void accelerate() = 0;

    const std::string &getColor() const;

    void setColor(const std::string &color);

    int getAge() const;

    void setAge(int age);

};


#endif //CS202_LAB6_INHERITANCE_VEHICLE_H
