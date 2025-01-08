#include <iostream>
#include "contact.h"
using namespace std;

/* Exercice Carnet d'adresses :

    - Créer une application simple pour gérer un carnet d'adresses en utilisant des structs.

    UI :
        Bienvenue dans le carnet d’adresses !
        1. ajouter un contact
        2. afficher tous les contacts
        3. rechercher un contact par nom
        4. supprimer un contact
        5. quitter

        Choisissez une option :

    PS: On a pas besoin de constructeurs dans la structure Contact pour cet exercice 
        car on initialise directement les champs à partir des entrées utilisateur.
        
*/

int main() {
    Carnet carnet;
    int choix;

    do {
        afficherMenu();
        cin >> choix;

        switch (choix) {
            case 1:
                ajouterContact(carnet);
                break;
            case 2:
                afficherContacts(carnet);
                break;
            case 3:
                chercherContact(carnet);
                break;
            case 4:
                supprimerContact(carnet);
                break;
            case 5:
                cout << "Au revoir !" << endl;
                break;
            default:
                cout << "Option invalide. Veuillez réessayer." << endl;
        }
    } while (choix != 5);

    return 0;
}
