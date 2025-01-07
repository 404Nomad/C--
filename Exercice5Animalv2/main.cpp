#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

// Base class: Animal
class Animal {
protected:
    string nom;
    string race;
    int age;

public:
    Animal() : nom(""), race(""), age(0) {}
    Animal(string nom, string race, int age) : nom(nom), race(race), age(age) {}
    virtual ~Animal() {}

    string getNom() const { return nom; }
    string getRace() const { return race; }
    int getAge() const { return age; }

    void setNom(string nom) { this->nom = nom; }
    void setRace(string race) { this->race = race; }
    void setAge(int age) { this->age = age; }

    virtual void toString() const {
        cout << "================= Informations ================" << endl;
        cout << left << setw(10) << "Nom" << ": " << nom << endl;
        cout << left << setw(10) << "Race" << ": " << race << endl;
        cout << left << setw(10) << "Age" << ": " << age << endl;
        cout << "===============================================" << endl;
    }
};

// Derived class: Chien
class Chien : public Animal {
public:
    Chien() : Animal() {}
    Chien(string nom, string race, int age) : Animal(nom, race, age) {}
    ~Chien() {}

    void toString() const override {
        cout << "=== Chien ===" << endl;
        Animal::toString();
    }
};

// Derived class: Chat
class Chat : public Animal {
public:
    Chat() : Animal() {}
    Chat(string nom, string race, int age) : Animal(nom, race, age) {}
    ~Chat() {}

    void toString() const override {
        cout << "=== Chat ===" << endl;
        Animal::toString();
    }
};

int main() {
    vector<Animal*> animaux;

    // Add Chien and Chat objects to the vector
    animaux.push_back(new Chien("Rex", "Berger Allemand", 5));
    animaux.push_back(new Chat("Mimi", "Siamois", 3));
    animaux.push_back(new Chien("Bella", "Labrador", 2));
    animaux.push_back(new Chat("Chouchou", "Persan", 4));

    // Display animal information
    for (const auto& animal : animaux) {
        animal->toString();
    }

    // Clean up memory
    for (auto& animal : animaux) {
        delete animal;
    }

    return 0;
}
