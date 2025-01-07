#include <iostream>
#include <string> // Pour utiliser le type string
#include <iomanip> // Pour utiliser setw()
#include <vector>
#include "Personne.h"
#include "Etudiant.h"
using namespace std;


/* class Personne {
    // On commence par gérer l'encapsulation
    // public: accessible de l'extérieur
    // private: non accessible de l'extérieur
    // protected: accessible par les classes dérivées
    private:
        // Attributs privés, non accessibles directement de l'extérieur
        // Onjet basique de Personne ( contact )
        string nom;
        string prenom;
        string email;
        int age;

    public:
        
        // Constructeur
        // Constructeur par défaut vide
        Personne() { this->nom = ""; this->prenom = ""; this->email = ""; this->age = 0; }
        // Constructeur avec paramètres
        Personne(string nom, string prenom, string email, int age) {
            this->nom = nom;
            this->prenom = prenom;
            this->email = email;
            this->age = age;
        }

        // Destructeur
        // methode equilavent a un constructeur, elle permet de supprimer l'objet et executer du code
        ~Personne() {
            cout << "Destruction de l'objet Personne" << endl;
        }

        // Accesseurs (getters)
        // on type car ils retournent une valeur
        string getNom() { return nom; }
        string getPrenom() { return prenom; }
        string getEmail() { return email; }
        int getAge() { return age; }

        // Mutateurs (setters)
        void setNom(string name) { this->nom = name; }
        void setPrenom(string firstname) { this->prenom = firstname; }
        void setEmail(string mail) { this->email = mail; }
        void setAge(int age) { this->age = age; }
        // Surcharge de la méthode setAge
        void setAge(string age) { this->age = stoi(age); }

        // Méthodes
        void afficheInfo() {
            cout << "Nom: " << this->nom << "| Prenom: " << this->prenom << "| Email: " << this->email << "| Age: " << this->age << endl;
        }
        void afficheInfo2() {
            cout << "================= Informations ================" << endl;
            cout << "Nom    : " << this->nom << endl;
            cout << "Prenom : " << this->prenom << endl;
            cout << "Email  : " << this->email << endl;
            cout << "Age    : " << this->age << endl;
            cout << "===============================================" << endl;
        }
        void afficheInfo3() {
            cout << "================= Informations ================" << endl;
            cout << left << setw(10) << "Nom" << ": " << this->nom << endl;
            cout << left << setw(10) << "Prenom" << ": " << this->prenom << endl;
            cout << left << setw(10) << "Email" << ": " << this->email << endl;
            cout << left << setw(10) << "Age" << ": " << this->age << endl;
            cout << "===============================================" << endl;
        }


}; */

int main()
{
    vector<Personne> carnet;

    //Création d'un objet de type Personne sans constructeur
    Personne p1;
    p1.setNom("Doe");
    p1.setPrenom("John");
    p1.setEmail("dev@orange.fr");
    p1.setAge(25);

    // Création d'un autre objet de type Personne avec le constructeur
    Personne p2("Khan", "Great", "NewVegas@dev.org", 350);

    // Création d'un objet de type Etudiant
    Etudiant e1("Bac + 5", "Ecole 42");
    e1.setNom("Bond");
    e1.setPrenom("Mickeal");
    e1.setEmail("noname@user.com");
    e1.setAge(30);

    Etudiant e2("Master 3", "Ecole 42", "Mouse", "Mickey", "tph@rdlcd.com", 52);

    // Ajout des objets dans le carnet
    carnet.push_back(p1);
    carnet.push_back(p2);
    carnet.push_back(e1);
    carnet.push_back(e2);

    // Parcours du carnet
    for (const auto & pers : carnet) {
        pers.afficheInfo3();
        
        
    }

    // Sortie des informations
    // p1.afficheInfo3();
    // p2.afficheInfo3();

    return 0;
}