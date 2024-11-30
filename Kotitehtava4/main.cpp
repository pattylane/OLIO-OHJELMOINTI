#include "Car.h"

int main() {
    // Luo Car-olio
    Car car("Toyota", "Corolla");

    // Aseta moottorin ja renkaiden ominaisuudet
    car.setEngine();
    car.setWheels();

    // Tulosta auton tiedot
    car.printDetails();

    return 0;
}
