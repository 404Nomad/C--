#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Animal {
    protected:
        string nom;
        string race;
        int age;

    public:
        Animal();
        Animal(string nom, string race, int age);
        virtual ~Animal();

        string getNom() const;
        string getRace() const;
        int getAge() const;

        void setNom(string nom);
        void setRace(string race);
        void setAge(int age);

        virtual void toString() const;
};

#endif
