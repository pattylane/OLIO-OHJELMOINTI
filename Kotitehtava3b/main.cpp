#include "animal.h"
#include "dog.h"

int main() {

    Animal* animal = new Animal();
    animal->callOut();


    Animal* dog = new Dog();
    dog->callOut();


    delete animal;

    delete dog;

    return 0;
}
