On install clang et cmake puis les extensions sur vscode
    Extensions:
        Better c++ Syntax
        C/C++
        C/C++ Extension pack
        C/C++ Themes 
        CMake
        CMake Tools
        Makefile Tools

PremierProgramme main.cpp :
    on ecrit notre premier file 

        #include <iostream> // Permet un certain nombre de fonctionalités utile pour le stream

        int main() {
            std::cout << "bonne année les cda !" << std::endl;
            return 0;
        }

    Commande : 
        - clang++ -std=c++20 -o main main.cpp

            clang++ : Utilise le compilateur Clang pour C++.
            -std=c++20 : Indique que vous compilez avec la norme C++20.
            -o main : Spécifie que le fichier exécutable de sortie sera nommé main.
            main.cpp : Le fichier source à compiler.


on crée notre second programme, cmakeProject
Vous écrivez un fichier C++ basique pour vous familiariser avec la compilation via Clang.

    Folder structure :
        cmakeProject/
        ├── build/                # Répertoire pour les fichiers de build générés par CMake
        ├── src/                  # Contient les fichiers source du projet
        │   ├── main.cpp          # Fichier principal du programme
        └── CMakeLists.txt    # Configuration de CMake pour le projet


    build
    src
        CMakeList.txt
            cmake_minimum_required(VERSION 3.10) # Version minimale de CMake
            project(cmakeProject)                # Nom du projet

            set(CMAKE_CXX_STANDARD 17)       # Définit la norme C++ à utiliser (C++17 ici)

            add_executable(MyCppProject src/main.cpp) # Ajoute un exécutable nommé "MyCppProject" à partir de main.cpp
    
    Maintenant Vous exécutez cmake .. pour générer le Makefile.
    Ensuite, vous exécutez make pour compiler et construire: 
        - cd cmakeProject/build     # Navigue vers le répertoire "build"
        - cmake ..     # Génère les fichiers de construction à partir de "CMakeLists.txt"
        - make         # Compile le projet en utilisant le fichier Makefile généré


        Puis on teste : 
            $ ./MyCppProject
                un programme compilé par cmake

Nouveau Répertoire InAndOut
    file exemple.cpp
        #include <iostream>
        using namespace std; // Permet d'utiliser les fonctions de la bibliothèque standard sans le préfixe std::
        // on va compiler avec : $ g++ exemple.cpp -o exemple

        int main() {
            // on va  apprendre a utliser un string
            string nom; // déclaration d'une variable de type string

            cout << "Quel est votre nom ?"; // on demande à l'utilisateur de saisir son nom
            cin >> nom; // on récupère la saisie de l'utilisateur

            cout << "Bonjour " << nom << " !" <<  endl; // endl ( endline )

            return 0;
        }
    
    // on va compiler avec : $ g++ exemple.cpp -o exemple
    puis on peut tester :
        $ cd inAndOut/
        $ g++ exemple.cpp -o exemple
        $ ls
            exemple  exemple.cpp
        $ ./exemple
            Quel est votre nom ? test
            Bonjourtest!

Maintenant on va crée un repertoire variableetAutre a la racine de c++

Maintenant Exercice 01 : Calculatrice


On installe sqlite3 
et la lib
sudo apt install sqlite3
sudo apt-get install libsqlite3-dev

On installe mysql
sudo apt-get install libmysqlcppconn-dev
