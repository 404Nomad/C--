#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
#include "Personne.h"
using namespace std;

// Déclarations
// Pour l'heritage on utilise le symbole ':' 
class Etudiant : public Personne {
    private:
        string grade;
        string ecole;

    public:
        // Constructeur vide
        Etudiant();
        // Constructeur avec paramètres
        Etudiant(string grade, string ecole);
        Etudiant(string grade, string ecole, string nom, string prenom, string email, int age); // constructeur injecte des données de etudiant et personne
        // Destructeur
        ~Etudiant();

        // Mutateurs (setters)
        void setGrade(string grade); 
        void setEcole(string ecole);

        // Accesseurs (getters)
        string getGrade() const;
        string getEcole() const;

        void toString() const;
};


#endif