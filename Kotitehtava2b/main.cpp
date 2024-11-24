#include <iostream>
#include <vector>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    // Konstruktori
    Car(const std::string& carBrand, const std::string& carModel, int carYearModel)
        : brand(carBrand), model(carModel), yearModel(carYearModel) {}

    // Metodi tietojen tulostamiseen
    void printData() const {
        std::cout << "Merkki: " << brand << ", Malli: " << model << ", Vuosimalli: " << yearModel << std::endl;
    }
};

int main() {
    // Luodaan vektori autoille
    std::vector<Car> carList;

    // Luodaan Seitsemän Car-oliota
    Car car1("Toyota", "Corolla", 2021);
    Car car2("Ford", "Mustang", 2020);
    Car car3("Tesla", "Model 3", 2022);
    Car car4("BMW","M5 sedan", 2024);
    Car car5("Range Rover", "Evoque", 2019);
    Car car6("Nissan", "Almera", 2025);
    Car car7("Ferrari", "GT 250", 1965);

    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);
    carList.push_back(car4);
    carList.push_back(car5);
    carList.push_back(car6);
    carList.push_back(car7);

    // Tulostetaan toisen ja neljännen alkion tiedot
    std::cout << "Toinen listan autoista:" << std::endl;
    carList[1].printData();
    std::cout << "Neljas listan autoista:" << std::endl;
    carList[1].printData();

    // Tulostetaan kaikkien autojen tiedot
    std::cout << "\nKaikki listan autot:" << std::endl;
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
