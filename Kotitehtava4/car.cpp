#include "Car.h"
#include <iostream>
using namespace std;

// Oletuskonstruktori
Car::Car() : model(""), brand("") {}

// Parametrisoitu konstruktori
Car::Car(const string& br, const string& mdl) : brand(br), model(mdl) {}

// Getterit ja setterit
string Car::getModel() const {
    return model;
}

void Car::setModel(const string& mdl) {
    model = mdl;
}

string Car::getBrand() const {
    return brand;
}

void Car::setBrand(const string& br) {
    brand = br;
}

void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels() {
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

void Car::printDetails() const {
    cout << "Auton merkki: " << brand << endl;
    cout << "Auton malli: " << model << endl;
    cout << "Moottorin hevosvoimat: " << objEngine.getHorsepower() << endl;
    cout << "Moottorin tilavuus: " << objEngine.getDisplacement() << "L" << endl;
    cout << "rengas 1: " << objWheel1.getSize() << " tuumaa,  " << objWheel1.getType() << endl;
    cout << "rengas 2: " << objWheel2.getSize() << " tuumaa,  " << objWheel2.getType() << endl;
    cout << "rengas 3: " << objWheel3.getSize() << " tuumaa,  " << objWheel3.getType() << endl;
    cout << "rengas 4: " << objWheel4.getSize() << " tuumaa,  " <<  objWheel4.getType() << endl;
}

