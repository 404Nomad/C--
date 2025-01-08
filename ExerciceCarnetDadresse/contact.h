#ifndef CONTACT_H
#define CONTACT_H

#include <string>
using namespace std;

// Struct Contact
struct Contact {
    string nom;
    string prenom;
    string telephone;
    string email;
};

// Struct Carnet
struct Carnet {
    Contact contacts[50]; 
    int nombreContacts = 0; 
};

// Fonctions
void afficherMenu();
void ajouterContact(Carnet& carnet);
void afficherContacts(const Carnet& carnet);
void chercherContact(const Carnet& carnet);
void supprimerContact(Carnet& carnet);

#endif
