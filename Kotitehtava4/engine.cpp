#include "Engine.h"

// Oletuskonstruktori
Engine::Engine() : horsepower(0), displacement(0.0) {}

// Parametrisoitu konstruktori
Engine::Engine(int hp, double disp) : horsepower(hp), displacement(disp) {}

// Getterit
int Engine::getHorsepower() const {
    return horsepower;
}

double Engine::getDisplacement() const {
    return displacement;
}

// Setterit
void Engine::setHorsepower(int hp) {
    horsepower = hp;
}

void Engine::setDisplacement(double disp) {
    displacement = disp;
}
