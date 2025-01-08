#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <string>
using namespace std;

struct Triangle {
    
    // Attributs / Déclaration des attributs
    int cote1, cote2, cote3;

    //Constructeur vide
    Triangle();

    //Constructeur avec parametres
    Triangle(int cote1, int cote2, int cote3);


    // Destructeur
    ~Triangle() {
        cout << "Destruction de l'objet Triangle" << endl;
    };

    void magrite() const;

};

#endif