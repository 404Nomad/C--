#include <iostream>
#include "math_utils.h"
using namespace std;

// application avec addition, soustration, multiplication 
// exécuter : $ g++ calcule.cpp -o main
//          : $ ./main

/*
On compile nos deux .Cpp 
    // g++ math_utils.cpp calcule.cpp -o main
    // g++ -c calcule.cpp -o calcule.o

On les compile en un seul fichier
    // g++ math_utils.o calcule.o -o main

On exécute le fichier
    // ./main
        // Result :
            somme : 20
            différence : 10
            produit : 75
*/

/* 
    // déclarer 

    // Déplacé en haut du fichier math_utils.h
        int addition(int a, int b);
        int soustraction(int a, int b);
        int multiplication(int a, int b); 
    

    // Déplacé en haut du fichier math_utils.h
    // maintenant qu'on a déclaré les fonctions, on peut les définir
    // Addition
    int addition(int a, int b) {
        return a + b;
    }

    // Soustraction
    int soustraction(int a, int b) {
        return a - b;
    }

    // Multiplication
    int multiplication(int a, int b) {
        return a * b;
    } 
*/

// on déclare le main
int main( ) {
    int x = 15, y = 5;
    cout << "somme : " << addition(x,y) << endl; 
    cout << "différence : " << soustraction(x,y) << endl;
    cout << "produit : " << multiplication(x,y) << endl;
    cout << "division : " << division(x,y) << endl;
}