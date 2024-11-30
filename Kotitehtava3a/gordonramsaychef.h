#ifndef GORDONRAMSAYCHEF_H
#define GORDONRAMSAYCHEF_H

#include "chef.h"


class GordonRamsayChef : public Chef {
public:
    GordonRamsayChef() : Chef("Gordon Ramsay") {
        std::cout << "Chef Gordon Ramsay konstruktori" << std::endl;
    }

    ~GordonRamsayChef() override {
        std::cout << "Chef Gordon Ramsay destruktori" << std::endl;
    }

    void makeSalad() override {
        std::cout << "Chef Gordon Ramsay makes salad" << std::endl;
    }

    void makeSoup() override {
        std::cout << "Chef Gordon Ramsay makes soup" << std::endl;
    }
};

#endif
