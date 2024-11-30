#ifndef ENGINE_H
#define ENGINE_H

class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine(); // Oletuskonstruktori
    Engine(int hp, double disp); // Parametrisoitu konstruktori

    // Getterit
    int getHorsepower() const;
    double getDisplacement() const;

    // Setterit
    void setHorsepower(int hp);
    void setDisplacement(double disp);
};

#endif // ENGINE_H
