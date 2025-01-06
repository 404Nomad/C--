#include <iostream> // Pour utiliser les entrées/sorties
#include <vector> // Pour utiliser les vecteurs
#include <fstream> // Pour lire un fichier
#include <string> // Pour utiliser les chaînes de caractères
#include <ctime> // Pour la génération aléatoire
#include <cstdlib> // Pour rand() et srand()
#include <algorithm> // Pour std::find

using namespace std;

/* 
    Créer un Pendu :

        === Pendu ===
        Bienvenue dans le jeu du pendu !
        Vous avez 8 essais pour trouver le mot caché.
        Le mot caché est :

        On commence par lire les mots du fichier mots.txt et les stocker dans un vecteur.
            Ajout verifications si le fichier est vide ou inexistant.
        On choisit un mot aléatoire dans le vecteur.
        On initialise le mot masqué avec des "_".
        On initialise les variables du jeu : essaisRestants = 8, lettresIncorrectes = [].
        On affiche le message de bienvenue et le nombre d'essais restants.
        On entre dans la boucle principale du jeu
            On affiche le mot masqué.
            On affiche les lettres incorrectes.
            On demande une lettre à l'utilisateur.
            On vérifie si la lettre est dans le mot.
                Si la lettre est trouvée, on révèle la lettre dans le mot masqué.
                Sinon, on ajoute la lettre à la liste des incorrectes et on décrémente le nombre d'essais.
            On affiche un message en fonction du résultat.
        On affiche le résultat du jeu.

*/

int main() {

    // Ouvrir le fichier mots.txt
    // ios::in : ouvrir le fichier en mode lecture
    fstream file("mots.txt", ios::in); 

    // Vérifier si le fichier est ouvrable
    if (!file) {
        cerr << "Erreur : impossible d'ouvrir le fichier mots.txt." << endl;
        return 1;
    }

    // Lire tous les mots du fichier dans un vecteur
    // vector<string> mots : vecteur de chaînes de caractères
    // string mot : chaîne de caractères
    vector<string> mots;
    string mot;
    while (file >> mot) {
        mots.push_back(mot);
    }
    file.close();

    // Vérifier si le fichier contient des mots
    if (mots.empty()) {
        cerr << "Erreur : le fichier mots.txt est vide." << endl;
        return 1;
    }


    // Initialisation
    // Choisir un mot aléatoire
    srand(time(0)); // Initialiser la graine pour la génération aléatoire
    string motCache = mots[rand() % mots.size()];

    // Initialiser le mot masqué avec des "_"
    string motMasque(motCache.size(), '_');

    // Variables du jeu
    int essaisRestants = 8;
    vector<char> lettresIncorrectes;


    // Boucle principale du jeu
    cout << "Bienvenue dans le jeu du pendu !" << endl;
    cout << "Vous avez " << essaisRestants << " essais pour trouver le mot caché." << endl;

    while (essaisRestants > 0 && motMasque != motCache) {
        cout << "\nMot caché : " << motMasque << endl;

        // Afficher les lettres incorrectes
        if (!lettresIncorrectes.empty()) {
            cout << "Lettres incorrectes : ";
            for (char lettre : lettresIncorrectes) {
                cout << lettre << " ";
            }
            cout << endl;
        }

        // Demander une lettre à l'utilisateur
        cout << "Entrez une lettre : ";
        char lettre;
        cin >> lettre;

        // Vérifier si la lettre est dans le mot
        bool lettreTrouvee = false;
        for (size_t i = 0; i < motCache.size(); ++i) {
            if (motCache[i] == lettre && motMasque[i] != lettre) {
                motMasque[i] = lettre; // Révéler la lettre
                lettreTrouvee = true;
            }
        }

        if (!lettreTrouvee) {
            // Ajouter la lettre à la liste des incorrectes si elle n'est pas déjà dedans
            if (find(lettresIncorrectes.begin(), lettresIncorrectes.end(), lettre) == lettresIncorrectes.end()) {
                lettresIncorrectes.push_back(lettre);
                essaisRestants--;
                cout << "Mauvaise lettre ! Il vous reste " << essaisRestants << " essais." << endl;
            } else {
                cout << "Vous avez déjà essayé cette lettre." << endl;
            }
        } else {
            cout << "Bonne lettre !" << endl;
        }
    }

    // Fin du jeu
    if (motMasque == motCache) {
        cout << "\nFélicitations ! Vous avez trouvé le mot : " << motCache << endl;
    } else {
        cout << "\nDommage ! Vous avez perdu. Le mot était : " << motCache << endl;
    }

    return 0;
}