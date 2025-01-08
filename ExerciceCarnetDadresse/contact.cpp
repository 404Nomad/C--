#include "contact.h"
#include <iostream>
using namespace std;

// on initialise directement les champs à partir des entrées utilisateur

// Fonction pour afficher le menu
void afficherMenu() {
    cout << "" << endl;
    cout << "Bienvenue dans le carnet d’adresses !" << endl;
    cout << "1. Ajouter un contact" << endl;
    cout << "2. Afficher tous les contacts" << endl;
    cout << "3. Rechercher un contact par nom" << endl;
    cout << "4. Supprimer un contact" << endl;
    cout << "5. Quitter" << endl;
    cout << "" << endl;
    cout << "Choisissez une option : " ; // on ne endl pas afin de rester sur la meme ligne

}

// Ajouter un contact
void ajouterContact(Carnet& carnet) {
    if (carnet.nombreContacts >= 50) {
        cout << "Le carnet est plein. Impossible d'ajouter un nouveau contact." << endl;
        return;
    }

    // Nom
    Contact nouveauContact;
    cout << "Entrez le nom : ";
    cin.ignore(); // Ingnore() afin d'éviter le saut de ligne
    getline(cin, nouveauContact.nom);

    // Prenom
    cout << "Entrez le prénom : ";
    getline(cin, nouveauContact.prenom);

    // Numéro de téléphone
    cout << "Entrez le numéro de téléphone : ";
    getline(cin, nouveauContact.telephone);

    // Email
    cout << "Entrez l'email : ";
    getline(cin, nouveauContact.email);

    // Ajouter le nouveau contact et incrémente le nombre de contacts
    carnet.contacts[carnet.nombreContacts] = nouveauContact;
    carnet.nombreContacts++;
    cout << "Contact ajouté avec succès !" << endl;
}

// Afficher tous les contacts
void afficherContacts(const Carnet& carnet) {

    // Si carnet vide affiche message
    if (carnet.nombreContacts == 0) {
        cout << "Le carnet d’adresses est vide." << endl;
        return;
    }

    // Afficher la liste des contacts avec leurs informations
    // on utilise carnet.contacts[i] car on accéde a un élément du tableau contacts dans la structure carnet
    cout << endl << "Liste des contacts :" << endl;
    for (int i = 0; i < carnet.nombreContacts; ++i) {
        cout << i + 1 << ". Nom : " << carnet.contacts[i].nom
            << ", Prénom : " << carnet.contacts[i].prenom
            << ", Téléphone : " << carnet.contacts[i].telephone
            << ", Email : " << carnet.contacts[i].email << endl;
    }
}

// Chercher un contact par nom
void chercherContact(const Carnet& carnet) {

    // Si carnet vide > affiche message
    if (carnet.nombreContacts == 0) {
        cout << "Le carnet d’adresses est vide." << endl;
        return;
    }

    string nomRecherche;
    cout << "Entrez le nom à rechercher : ";
    cin.ignore(); // Ingnore() afin d'éviter le saut de ligne
    getline(cin, nomRecherche);

    // Rechercher le contact par nom
    for (int i = 0; i < carnet.nombreContacts; ++i) {
        if (carnet.contacts[i].nom == nomRecherche) {
            cout << "Contact trouvé ! Nom : " << carnet.contacts[i].nom << endl;
            return;
        }
    }

    cout << "Aucun contact trouvé avec le nom " << nomRecherche << "." << endl;
}

// Supprimer un contact
void supprimerContact(Carnet& carnet) {

    // Si carnet vide > affiche message
    if (carnet.nombreContacts == 0) {
        cout << "Le carnet d’adresses est vide." << endl;
        return;
    }

    string nomASupprimer;
    cout << "Entrez le nom du contact à supprimer : ";
    cin.ignore(); // Ingnore() afin d'éviter le saut de ligne
    getline(cin, nomASupprimer);

    for (int i = 0; i < carnet.nombreContacts; ++i) {
        if (carnet.contacts[i].nom == nomASupprimer) {
            for (int j = i; j < carnet.nombreContacts - 1; ++j) {
                carnet.contacts[j] = carnet.contacts[j + 1];
            }
            carnet.nombreContacts--;
            cout << "Contact supprimé avec succès." << endl;
            return;
        }
    }

    cout << "Aucun contact trouvé avec le nom " << nomASupprimer << "." << endl;
}
