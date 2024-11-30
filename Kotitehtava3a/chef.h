#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>


class Chef {
public:
    explicit Chef(const std::string &name) : chefName(name) {
        std::cout << "Chef " << chefName << " konstruktori" << std::endl;
    }

    virtual ~Chef() {
        std::cout << "Chef " << chefName << " destruktori" << std::endl;
    }


    virtual void makeSalad() {
        std::cout << "Chef " << chefName << " makes salad" << std::endl;
    }

    virtual void makeSoup() {
        std::cout << "Chef " << chefName << " makes soup" << std::endl;
    }

protected:
    std::string chefName;
};

#endif
