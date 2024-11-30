#include "Wheel.h"

// Oletuskonstruktori
Wheel::Wheel() : size(0), type("") {}

// Parametrisoitu konstruktori
Wheel::Wheel(int sz, const string& tp) : size(sz), type(tp) {}

// Getterit
int Wheel::getSize() const {
    return size;
}

string Wheel::getType() const {
    return type;
}

// Setterit
void Wheel::setSize(int sz) {
    size = sz;
}

void Wheel::setType(const string& tp) {
    type = tp;
}
