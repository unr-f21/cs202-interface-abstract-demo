//
// Created by Keith Lancaster on 10/7/21.
//

#include "Vehicle.h"

const std::string &Vehicle::getColor() const {
    return color;
}

void Vehicle::setColor(const std::string &color) {
    Vehicle::color = color;
}

int Vehicle::getAge() const {
    return age;
}

void Vehicle::setAge(int age) {
    Vehicle::age = age;
}

Vehicle::~Vehicle() {

}



