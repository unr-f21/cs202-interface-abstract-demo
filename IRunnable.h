//
// Created by Keith Lancaster on 10/7/21.
//

#ifndef CS202_LAB6_INHERITANCE_IRUNNABLE_H
#define CS202_LAB6_INHERITANCE_IRUNNABLE_H


class IRunnable {
public:
    virtual void run() = 0;
    virtual void stop() = 0;
};


#endif //CS202_LAB6_INHERITANCE_IRUNNABLE_H
