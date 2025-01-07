## Concernant la surcharge

Sur l'accesseur, on peut surcharger les accesseurs pour retourner des valeurs différentes.  
Exemple : 
```cpp
void setAge(string age) { this->age = stoi(age); }
// stoi = string to int
```

## Concernant la modularisation

Afin de modulariser notre objet, nous créons les dossiers `build` et `src` :
- Déplacer `contact.cpp` dans le dossier `src`
- Créer `personne.h` dans le dossier `src`
- Créer `personne.cpp` dans le dossier `src`

### `personne.h` pour les déclarations

```cpp
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
```

### `personne.cpp` pour les définitions des méthodes

```cpp
#include "Personne.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Constructeur vide
Personne::Personne() : nom(""), prenom(""), email(""), age(0) {}

// Constructeur avec paramètres
Personne::Personne(string nom, string prenom, string email, int age) : nom(nom), prenom(prenom), email(email), age(age) {}

// Destructeur
Personne::~Personne() {}

// Mutateurs (setters)
void Personne::setNom(string nom) { this->nom = nom; }
void Personne::setPrenom(string prenom) { this->prenom = prenom; }
void Personne::setEmail(string email) { this->email = email; }
void Personne::setAge(int age) { this->age = age; }

// Accesseurs (getters)
string Personne::getNom() const { return this->nom; }
string Personne::getPrenom() const { return this->prenom; }
string Personne::getEmail() const { return this->email; }
int Personne::getAge() const { return this->age; }

// Méthodes
void Personne::afficheInfo3() const {
    cout << "================= Informations ================" << endl;
    cout << left << setw(10) << "Nom" << ": " << this->nom << endl;
    cout << left << setw(10) << "Prenom" << ": " << this->prenom << endl;
    cout << left << setw(10) << "Email" << ": " << this->email << endl;
    cout << left << setw(10) << "Age" << ": " << this->age << endl;
    cout << "===============================================" << endl;
}
```

### `CMakeLists.txt`

```cmake
cmake_minimum_required(VERSION 3.10)

project(objets)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES 
    src/contact.cpp 
    src/Personne.cpp)

include_directories(src)

add_executable(contact ${SOURCES})
```

### Dans le terminal, répertoire `build`

```sh
> cmake ..
-- The C compiler identification is GNU 11.4.0
-- The CXX compiler identification is GNU 11.4.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (0.4s)
-- Generating done (0.0s)
-- Build files have been written to: /home/cd2groupea/Documents/C++/objets/build

> make
[ 33%] Building CXX object CMakeFiles/contact.dir/src/contact.cpp.o
[ 66%] Building CXX object CMakeFiles/contact.dir/src/Personne.cpp.o
[100%] Linking CXX executable contact
[100%] Built target contact

> ./contact
================= Informations ================
Nom       : Doe
Prenom    : John
Email     : dev@orange.fr
Age       : 25
===============================================
================= Informations ================
Nom       : Khan
Prenom    : Great
Email     : NewVegas@dev.org
Age       : 350
```
