#ifndef CAR_H
#define CAR_H

#include "Engine.h"
#include "Wheel.h"
#include <string>
using namespace std;

class Car {
private:
    Engine objEngine;
    Wheel objWheel1, objWheel2, objWheel3, objWheel4;
    string model;
    string brand;

public:
    Car(); // Oletuskonstruktori
    Car(const string& br, const string& mdl); // Parametrisoitu konstruktori

    // Getterit ja setterit
    string getModel() const;
    void setModel(const string& mdl);

    string getBrand() const;
    void setBrand(const string& br);

    void setEngine();
    void setWheels();

    void printDetails() const;
};

#endif // CAR_H
