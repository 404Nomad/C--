#include <iostream>
#include <vector>
#include "chien.h"
#include "chat.h"

using namespace std;

int main() {
    vector<Animal*> animaux;

    animaux.push_back(new Chien("Snow", "Berger Allemand", 5));
    animaux.push_back(new Chat("White", "Siamois", 3));
    animaux.push_back(new Chien("Castle", "Labrador", 2));
    animaux.push_back(new Chat("Ponda", "Persan", 4));

    for (const auto& animal : animaux) {
        animal->toString();
    }

    for (auto& animal : animaux) {
        delete animal;
    }

    return 0;
}
