#include <iostream>
using namespace std;

// Passage par valeur
void incrementerValeur(int a) {
    a += 1; // Incrémente la variable locale (copie)
    cout << "Dans la fonction (par valeur) : " << a << endl;
    cout << "----------------" << endl;
}

// Passage par référence
void incrementerReference(int &b) {
    b += 1; // Modifie la variable originale
    cout << "Dans la fonction (par référence) : " << b << endl;
    cout << "----------------" << endl;

}

// Passage par pointeur
void incrementerPointeur(int *c) {
    (*c) += 1; // Modifie la variable originale via son adresse
    cout << "Dans la fonction (par pointeur) : " << *c << endl;
    cout << "----------------" << endl;

}

int main() {
    // Déclaration de la variable
    int x = 10;

    cout << "Avant les appels, x vaut : " << x << endl;

    // Passage par valeur
    int copie = x; // Crée une copie pour illustrer le passage par valeur
    incrementerValeur(copie);
    cout << "Après l'appel par valeur, x vaut : " << x << " (reste inchangé)" << endl;

    // Passage par référence
    incrementerReference(x);
    cout << "Après l'appel par référence, x vaut : " << x << endl;

    // Passage par pointeur
    incrementerPointeur(&x);
    cout << "Après l'appel par pointeur, x vaut : " << x << endl;

    return 0;
}
