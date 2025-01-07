#include "chien.h"

Chien::Chien() : Animal() {}

Chien::Chien(string nom, string race, int age) : Animal(nom, race, age) {}

Chien::~Chien() {}

void Chien::toString() const {
    cout << "=== Chien ===" << endl;
    Animal::toString();
}
