
#include <vector>
#include "boat.h"
#include "IRunnable.h"
#include "Vehicle.h"
#include "Car.h"

int main() {
    std::vector<std::unique_ptr<IRunnable>> runnables;
    std::vector<std::unique_ptr<ISinkable>> sinkables;
    std::vector<std::unique_ptr<Vehicle>> vehicles;
    vehicles.push_back(std::unique_ptr<Boat>(new Boat));
    runnables.push_back(std::unique_ptr<IRunnable>(new Boat));
    sinkables.push_back(std::unique_ptr<ISinkable>(new Boat));
    for(auto &r : runnables){
        r->run();
        //r.sink()  Does not work! Why?
    }

    for(auto &s : sinkables){
        s->sink();
    }
//
//    for(auto &v: vehicles){
//        v->run();
//    }
//
//    // Why does this not work?
////    Vehicle *pv = new Boat();
////    pv->sink();
//
//    Boat boat;
//    boat.setAge(10);
//    boat.setColor("red");
//
//    Car car;
    return 0;
}
