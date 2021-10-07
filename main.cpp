
#include <vector>
#include "boat.h"
#include "sailboat.h"
#include "IRunnable.h"
#include "Vehicle.h"
#include "Car.h"

int main() {
//    std::vector<std::unique_ptr<IRunnable>> runnables;
//    std::vector<std::unique_ptr<Vehicle>> vehicles;
//
//    vehicles.push_back(std::unique_ptr<Boat>(new Boat));
//    v.push_back(std::unique_ptr<Boat>(new SailBoat));
//    for( auto &b: v){
//        b->sink();
//    }
    Boat boat;
    boat.setAge(10);
    boat.setColor("red");

    Car car;
    return 0;
}
