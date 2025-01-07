#include "Personne.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Constructeur vide
Personne::Personne() : nom(""), prenom(""), email(""), age(0) {};

// Constructeur avec paramètres / signature
Personne::Personne(string nom, string prenom, string email, int age) : nom(nom), prenom(prenom), email(email), age(age) {};

// Destructeur
Personne::~Personne() {
    //cout << "Destruction de l'objet Personne" << endl;
};

// Mutateurs (setters)
void Personne::setNom( string nom ) { this->nom = nom; }
void Personne::setPrenom( string prenom ) { this->prenom = prenom; }
void Personne::setEmail( string email ) { this->email = email; }
void Personne::setAge( int age ) { this->age = age; }

// Accesseurs (getters)
string Personne::getNom() const { return this->nom; }
string Personne::getPrenom() const { return this->prenom; }
string Personne::getEmail() const { return this->email; }
int Personne::getAge() const { return this->age; }

// Méthodes
void Personne::afficheInfo3() const {
    cout << "================= Informations ================" << endl;
    cout << left << setw(10) << "Nom" << ": " << this->nom << endl;
    cout << left << setw(10) << "Prenom" << ": " << this->prenom << endl;
    cout << left << setw(10) << "Email" << ": " << this->email << endl;
    cout << left << setw(10) << "Age" << ": " << this->age << endl;
    cout << "===============================================" << endl;
}