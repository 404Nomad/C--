#include <iostream> // pour utiliser les entrées/sorties
#include <fstream> // servira a charger le json
#include <vector> // pour la liste
#include <string> // pour les chaînes de caractères
#include "json.hpp"

using namespace std;

// créer alias json qui va chercher la librairie
using json = nlohmann::json;

// Struct 
struct Voiture {
    string marque;
    string modele;

    // Constructeur vide
    Voiture() { this->marque = ""; this->modele = ""; }

    // Constructeur avec paramètres
    Voiture(string marque, string modele) : marque(marque), modele(modele) {}

    // Destructeur
    // methode equilavent a un constructeur, elle permet de supprimer l'objet et executer du code
    ~Voiture() {
        //cout << "Destruction de l'objet Voiture" << endl;
    }

    void jsonToStruct(const json& j){
        marque = j["marque"];
        modele = j["modele"];
    }

    void afficher() const{
        cout << "Voiture : marque=> " << marque << ", modele=> " << modele << endl;
    }

    // ajouter des objets au json
    void addJsonArray(json& jsonArray) const {
        // créer l'objet
        json voitureJson = {
            {"marque", marque},
            {"modele", modele}
        };
        // ajouter l'objet au json
        jsonArray.push_back(voitureJson);
    }

};

int main() {

    // on créer une liste avec un vecteur
    vector<Voiture> listeVoiture;

    ifstream file("/home/cd2groupea/Documents/C++/json/db.json");
    if(!file.is_open()) {

        // cerr = console error
        cerr << "Erreur : impossible d'ouvrir le fichier db.json." << endl;
        return 1;
    }

    // on déclare jsonData
    json jsonData;
    // on charge fichier 
    file >> jsonData;

    // equivalent de any en php
    // va trouver le typage par rapport a l'objet
    auto voitures = jsonData;

    Voiture vv("Wolkswagen", "Polo 5"); // on créer un objet
    vv.addJsonArray(voitures); // ajout au tableau de voiture

    for(const auto& car : voitures) {
        Voiture v;
        v.jsonToStruct(car);
        // on utilise le vecteur
        listeVoiture.push_back(v);
    }
    
    file.close(); // fermer aprés lecture

    // parcourir le tableau de voiture
    for(const auto& bagnole : listeVoiture) {
        bagnole.afficher();
    }




    return 0;
};