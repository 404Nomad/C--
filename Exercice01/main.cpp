/* Exercice 01 :
    - Créer un programme qui prend des entrées utilisateur pour réaliser des calculs arithmétiques simples.
     (addition, soustraction, multiplication, division)
     Ne pas oublier de gérer les erreurs !

    Bienvenue dans la calculatrice simple !
    Entrez le premier nombre : 10 ou ...
    Entrez un opérateur (+, -, *, /) :
    Entrez le deuxième nombre : 5 ou ...
*/

#include <iostream>
#include <limits> // Pour vérifier les erreurs d'entrée
#include <sstream> // Pour convertir les chaînes en nombres ( String > Int or Float )
using namespace std;

int main( ) {

    // Variables
    float a, b, c;
    
    // opérateurs 
    char op;

    // Messages d'accueil
    cout << "Bienvenue dans la calculatrice simple !" << endl;

    // Entrée du premier nombre
    cout << "Entrez le premier nombre : " << endl;
    //cin >> a;
    while (!(cin >> a)) {
        cout << "Erreur : veuillez entrer un nombre valide." << endl;
        cin.clear(); // Efface l'état d'erreur
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore les entrées invalides restantes
    }

    // Entrée de l'opérateur
    cout << "Entrez un opérateur (+, -, *, /) : " << endl;
    cin >> op;

    // Entrée du deuxième nombre
    cout << "Entrez le deuxième nombre : " << endl;
    //cin >> b;
    while (!(cin >> b)) {
        cout << "Erreur : veuillez entrer un nombre valide." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // switch case 
    switch (op) {
        case '+':
            c = a + b;
            cout << "Le résultat de l'addition est : " << c << endl;
            break;
        case '-':
            c = a - b;
            cout << "Le résultat de la soustraction est : " << c << endl;
            break;
        case '*':
            c = a * b;
            cout << "Le résultat de la multiplication est : " << c << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "Erreur : division par zéro" << endl;
            } else {
                c = a / b;
                cout << "Le résultat de la division est : " << c << endl;
            }
            break;
        default:
            cout << "Erreur : opérateur invalide" << endl;
            return 1; // Fin du programme avec et ou en cas d'erreur
            // break; Non nécessaire car c'est la fin du programme
    }

    return 0; // Fin du programme
}