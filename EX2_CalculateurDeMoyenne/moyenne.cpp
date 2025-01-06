#include <iostream>
#include <vector> // Vector is a dynamic array
#include "math_utils.h"

using namespace std;

/*
    Dans cet exercice, nous allons créer un calculateur de moyenne, qui prendra des entrées et retournera la moyenne.

        === Calculateur de moyenne ===
        Entrez une note ( entre 0 et 20 ): 15
        Voulez-vous entrer une autre note ? (O/N) : O
        Entrez une note ( entre 0 et 20 ): 18
        Voulez-vous entrer une autre note ? (O/N) : O
        Entrez une note ( entre 0 et 20 ): 12
        Voulez-vous entrer une autre note ? (O/N) : N
        La moyenne est de : 15

    Pour cet exercice nous utiliserons la modularité, possiblement en compilant deux .cpp en .o

        Création du premier fichier moyenne.cpp
        Création du second fichier math_utils.cpp
        Création du troisième fichier math_utils.h

        Dans le fichier math_utils.h, nous allons déclarer les fonctions qui seront utilisées dans les fichiers .cpp
            
            int addition(int a, int b, int c);
            int division(int sum, int n); // Divise une somme par un nombre

        Dans le fichier math_utils.cpp, nous allons définir les fonctions addition et division
            
            int addition(int a, int b, int c) {
                return a + b + c;
            }

            int division(int sum, int n) {
                return sum / n;
            }
        
        On ajoute <Vector> et on refactor notre code.

            On modifie le fichier math_utils.h

                int addition(const std::vector<int>& numbers);

            On modifie le fichier math_utils.cpp

                int addition(const std::vector<int>& numbers) {
                    int sum = 0;
                    for (int num : numbers) {
                        sum += num;
                    }
                    return sum;
                }
            On crée nos fichiers .o
            On compile en un fichier main
            on execute main :
                $ ./main
                Calculateur de moyenne
                Entrez la première note: 12
                Entrez la deuxième note: 15
                Entrez la troisième note: 19
                La moyenne est de: 15
            Maintenant on ajoute  " Voulez-vous entrer une autre note ? (O/N) : O "
            On ajoute un check de validité de l'entrée : note < 0 || note > 20
        
        Compilation
            g++ -c math_utils.cpp -o math_utils.o
            g++ -c moyenne.cpp -o moyenne.o
            g++ math_utils.o moyenne.o -o main
            ./main

*/

int main() {

    cout << "Calculateur de moyenne" << endl;

    // Récupérer les notes 
    vector<int> notes;
    int note;
    char AutreNote;

    do {
        cout << "Entrez une note (entre 0 et 20) : ";
        cin >> note;

        // Vérifier si l'entrée est valide
        if (cin.fail() || note < 0 || note > 20) {
            cin.clear();  // Réinitialise l'état d'entrée
            cin.ignore(1000, '\n');  // Ignore les entrées invalides restantes
            cout << "Erreur : Entrez une note valide entre 0 et 20." << endl;
            continue;  // Redemander une note
        }

        // Ajouter la note valide au vecteur
        notes.push_back(note);

        cout << "Voulez-vous entrer une autre note ? (O/N) : ";
        cin >> AutreNote;

    } while (AutreNote == 'O' || AutreNote == 'o');

    // Calculer la somme / moyenne
    int sum = addition(notes);             
    int moyenne = division(static_cast<double>(sum), notes.size()); 

    cout << "La moyenne est de: " << moyenne << endl;
    
    return 0;
}