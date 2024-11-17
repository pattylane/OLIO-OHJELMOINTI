#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void printData() {
        std::cout << "Brand: " << brand << "\n"
                  << "Model: " << model << "\n"
                  << "Year: " << yearModel << std::endl;
    }

    void setBrand(const std::string& carBrand) {
        brand = carBrand;
    }

    void setModel(const std::string& carModel) {
        model = carModel;
    }

    void setYearModel(int carYearModel) {
        yearModel = carYearModel;
    }
};

int main() {
    Car myCar;

    myCar.setBrand("BMW");
    myCar.setModel("M5 Sedan");
    myCar.setYearModel(2025);

    myCar.printData();

    return 0;
}
