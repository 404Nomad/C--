#include <iostream>
#include "Triangle.h"
using namespace std;

// Constructeur vide
Triangle::Triangle() : cote1(0), cote2(0), cote3(0) {}

// Constructeur avec parametres
Triangle::Triangle(int cote1, int cote2, int cote3) : cote1(cote1), cote2(cote2), cote3(cote3) {}

void Triangle::magrite() const {
    cout << "Je suis un triangle" << endl;
};