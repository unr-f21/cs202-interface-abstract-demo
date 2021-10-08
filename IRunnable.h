//
// Created by Keith Lancaster on 10/7/21.
//

#ifndef CS202_INTERFACES__IRUNNABLE_H
#define CS202_INTERFACES__IRUNNABLE_H


class IRunnable {
public:
    virtual void run() = 0;
    virtual void stop() = 0;
    virtual ~IRunnable() = default;
};


#endif //CS202_INTERFACES__IRUNNABLE_H
