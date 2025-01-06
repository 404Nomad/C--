#include <iostream> // Permet un certain nombre de fonctionalités utile pour le stream
using namespace std; // Permet d'utiliser les fonctions de la bibliothèque standard sans le préfixe std::

int main () {
    // Variables
    int age; // déclaration d'une variable de type int
    age = 25; // appel et affectation de la valeur 25

    float pi = 3.14; // déclaration d'une variable de type float et affectation de la valeur 3.14
    char initial = 'j'; // déclaration d'une variable de type char et affectation de la valeur 'j'

    initial = 'n'; // modification de la valeur de la variable initial

    int a, b;
    a = 5;
    b = 8;
    int somme = a + b; // déclaration type int et affectation 
    float division = a / b; // déclaration type float et affectation 
    int multiplication = a * b; // déclaration type int et affectation 
    int modulo = a % b; // déclaration type int et affectation

    // Opérateurs de comparaison
        // && : ET
        // || : OU
        // ! : NON
    bool res = (5 > 3 ) && ( 3 < 10); // true


    // Structures conditionnelles
    // If
    int x = 5;
    if (x > 10) {
        cout << "x est supérieur à 10" << endl;
        
    } else if (x = 5 ) {
        cout << "x est égal à 5" << endl;
    } else {
        cout << "x est inférieur à 10" << endl;
    }

    // Switch
    char grade = 'A';
    switch (grade) {
        case 'A':
            cout << "Excellent !" << endl;
            break;
        case 'B':
            cout << "Good !" << endl;
            break;
        case 'C':
            cout << "Passable !" << endl;
            break;
        case 'D':
            cout << "You passed !" << endl;
            break;
        case 'F':
            cout << "Better try again !" << endl;
            break;
        default:
            cout << "Invalid grade !" << endl;
    }

    // Boucle for
    for (int i = 0; i < 5; i++) {
        cout << "itération " << i << endl;
    }

    // Boucle while
    int u = 0;
    while ( u < 5 ) {
        cout << " valeur de u =>" << u << endl;
        u++; // incrémentation de la variable u
    }

    // Boucle do while
    int v = 0;
    do {
        cout << "v est égal à " << v << endl;
        v++; // incrémenter la variable v
    } while ( v < 5 );



    // Constantes
    // Norme veut que la constante soit en majuscule et que les mots soient séparés par des underscores
    const double GRAVITY = 9.81; // déclaration d'une constante de type double et affectation de la valeur 9.8
    // GRAVITY = 10.0; // impossible de modifier la valeur de la constante GRAVITY, erreur de compilation



    cout << "il a " << age << " ans !" << endl; // affichage de la variable age
    cout << "Son nom commence par " << initial << " !" << endl; // affichage de la variable initial
    cout << "La somme de " << a << " + " << b << " est " << somme << endl; // affichage de la variable somme
    return 0;
}

/*  Test 01 : 
        cd2groupea@PC0917-010:~/Documents/C++$ cd variableEtAutre/
        cd2groupea@PC0917-010:~/Documents/C++/variableEtAutre$ g++ main.cpp -o main
        cd2groupea@PC0917-010:~/Documents/C++/variableEtAutre$ ls
        main  main.cpp
        cd2groupea@PC0917-010:~/Documents/C++/variableEtAutre$ ./main
        j'ai 25 ans

    Test 02 : 
        cd2groupea@PC0917-010:~/Documents/C++/variableEtAutre$ g++ main.cpp -o main
        cd2groupea@PC0917-010:~/Documents/C++/variableEtAutre$ ./main
        j'ai 25 ans
        Son nom commence par g !

    Test 03 :
        cd2groupea@PC0917-010:~/Documents/C++/variableEtAutre$ g++ main.cpp -o main & ./main
        [1] 138170
        x est égal à 5
        Excellent !
        il a 25 ans !
        Son nom commence par n !
        La somme de 5 + 8 est 13
*/