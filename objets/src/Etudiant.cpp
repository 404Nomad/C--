#include "Etudiant.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Méthodes appel statique

// Constructeur vide
Etudiant::Etudiant() : grade(""), ecole("") {};

// Constructeur avec paramètres
Etudiant::Etudiant(string grade, string ecole) : grade(grade), ecole(ecole) {};

// Constructeur avec paramètres No.2
Etudiant::Etudiant(string grade, string ecole, string nom, string prenom, string email, int age ) : grade(grade), ecole(ecole), Personne(nom,prenom, email, age) {};

// Destructeur
Etudiant::~Etudiant() {
    //cout << "Destruction de l'objet Etudiant" << endl;
};

// Mutateurs (setters)
void Etudiant::setGrade( string grade ) { this->grade = grade; }
void Etudiant::setEcole( string ecole ) { this->ecole = ecole; }

// Accesseurs (getters)
string Etudiant::getGrade() const { return this->grade; }
string Etudiant::getEcole() const { return this->ecole; }

void Etudiant::toString() const {
    cout << "================= Informations ================" << endl;
    cout << left << setw(10) << "Prenom" << ": " << getPrenom() << endl;
    cout << left << setw(10) << "Nom" << ": " << getNom() << endl;
    cout << left << setw(10) << "Grade: " << this->grade << endl;
    cout << left << setw(10) << "Email" << ": " << getEmail() << endl;
    cout << left << setw(10) << "Ecole: " << this->ecole << endl;
    cout << "===============================================" << endl;
};