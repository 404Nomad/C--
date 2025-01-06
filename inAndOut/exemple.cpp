#include <iostream>
using namespace std; // Permet d'utiliser les fonctions de la bibliothèque standard sans le préfixe std::
// on va compiler avec : $ g++ exemple.cpp -o exemple

int main() {
    // on va  apprendre a utliser un string
    string nom; // déclaration d'une variable de type string

    cout << "Quel est votre nom ?"; // on demande à l'utilisateur de saisir son nom
    cin >> nom; // on récupère la saisie de l'utilisateur

    cout << "Bonjour " << nom << " !" <<  endl; // endl ( endline )

    return 0;
}