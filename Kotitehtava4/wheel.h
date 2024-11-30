#ifndef WHEEL_H
#define WHEEL_H

#include <string>
using namespace std;

class Wheel {
private:
    int size;
    string type;

public:
    Wheel(); // Oletuskonstruktori
    Wheel(int sz, const string& tp); // Parametrisoitu konstruktori

    // Getterit
    int getSize() const;
    string getType() const;

    // Setterit
    void setSize(int sz);
    void setType(const string& tp);
};

#endif // WHEEL_H
