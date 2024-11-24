#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>

// Pohjaluokka Chef
class Chef {
public:
    explicit Chef(const std::string &name) : chefName(name) {
        std::cout << "Chef " << chefName << " konstruktori" << std::endl;
    }

    virtual ~Chef() {
        std::cout << "Chef " << chefName << " destruktori" << std::endl;
    }

    // Virtuaaliset jäsenfunktiot
    virtual void makeSalad() {
        std::cout << "Chef " << chefName << " makes salad" << std::endl;
    }

    virtual void makeSoup() {
        std::cout << "Chef " << chefName << " makes soup" << std::endl;
    }

protected:
    std::string chefName; // Kokin nimi
};

#endif // CHEF_H
