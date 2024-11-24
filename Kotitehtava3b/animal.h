#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>


class Animal {
public:

    virtual void callOut() {
        std::cout << "Elain aantelee." << std::endl;
    }


    virtual ~Animal() {
        std::cout << "Animal on tuhoutunut." << std::endl;
    }
};

#endif
