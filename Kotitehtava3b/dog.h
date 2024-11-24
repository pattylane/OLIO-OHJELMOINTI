#ifndef DOG_H
#define DOG_H

#include "animal.h"


class Dog : public Animal {
public:

    void callOut() override {
        std::cout << "Koira haukkuu!" << std::endl;
    }


    ~Dog() override {
        std::cout << "Dog on tuhoutunut." << std::endl;
    }
};

#endif
