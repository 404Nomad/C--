#include <iostream>
#include <string>
#include "Triangle.h"
using namespace std;

// structure
struct Personne {
    string nom;
    float age;
    float taille;
};

struct Rectangle {
    int largeur, hauteur;

    // constructeur
    Rectangle() : largeur(0), hauteur(0) {}
    Rectangle(int largeur, int hauteur) : largeur(largeur), hauteur(hauteur) {}

    int aire() { // méthode
        return largeur * hauteur;
    }

    // deuxieme méthode de sortie
    void afficheAire() {
        cout << "Aire du rectangle : " << this->largeur << " x " << this->hauteur << " = " << this->aire() << " cm2" << endl;
    }
};

struct Animal {
    string nom;
    void manger(){
        cout << this->nom << " mange" << endl;
    }
};

struct Chien : public Animal {
    void aboyer() {
        cout << this->nom << " aboie" << endl;
    }
};

int main() {

    Personne p;
    p.nom = "Mars";
    p.age = 40000000.6;
    p.taille = 6779.11;

    Rectangle r;
    r.largeur = 20;
    r.hauteur = 10;

    cout << "Nom : " << p.nom << endl;
    cout << "Age : " << p.age << " ans" << endl;
    cout << "Taille : " << p.taille << " km" << endl;
    r.afficheAire();

    Rectangle r2(8,3);
    r2.afficheAire();

    Chien LeChien;
    LeChien.nom = "WhiteFox";
    LeChien.manger();
    LeChien.aboyer();

    Animal LeChat;
    LeChat.nom = "BlackCat";
    LeChat.manger();

    Triangle t1(4,6,8);
    t1.magrite();

    return 0;
};