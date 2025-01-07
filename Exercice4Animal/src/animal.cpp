#include "animal.h"

Animal::Animal() : nom(""), race(""), age(0) {}

Animal::Animal(string nom, string race, int age) : nom(nom), race(race), age(age) {}

Animal::~Animal() {}

string Animal::getNom() const { return nom; }
string Animal::getRace() const { return race; }
int Animal::getAge() const { return age; }

void Animal::setNom(string nom) { this->nom = nom; }
void Animal::setRace(string race) { this->race = race; }
void Animal::setAge(int age) { this->age = age; }

void Animal::toString() const {
    cout << "================= Informations ================" << endl;
    cout << left << setw(10) << "Nom" << ": " << nom << endl;
    cout << left << setw(10) << "Race" << ": " << race << endl;
    cout << left << setw(10) << "Age" << ": " << age << endl;
    cout << "===============================================" << endl;
}
