#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
using namespace std;

class Personne {
    private:
        string nom;
        string prenom;
        string email;
        int age;

    public:
        // Constructeur vide et avec paramètres
        Personne();
        Personne(string nom, string prenom, string email, int age);
        ~Personne();

        // Accesseurs (getters)
        string getNom() const;
        string getPrenom() const;
        string getEmail() const;
        int getAge() const;

        // Mutateurs (setters)
        void setNom(string nom);
        void setPrenom(string prenom);
        void setEmail(string email);
        void setAge(int age);

        void afficheInfo3() const;
        
};

#endif