//
// Created by Keith Lancaster on 10/7/21.
//

#ifndef CS202_INTERFACES__ISINKABLE_H
#define CS202_INTERFACES__ISINKABLE_H
class ISinkable {
public:
    virtual void sink() = 0;
    virtual ~ISinkable() = default;
};
#endif //CS202_INTERFACES__ISINKABLE_H
