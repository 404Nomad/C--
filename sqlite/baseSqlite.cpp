#include <iostream>
#include <string>
#include <sqlite3.h>
using namespace std;

int main() {

    // instancier un pointer sqlite3 que l'on apellera db
    // on utilise * pour pointer sur une variable
    sqlite3* db;

    // variable qui contiendra le message d'erreur
    char* errmsg = nullptr;

    //ouverture de la base
    // on nomme la base en parametre
    // on recupere la variable de db
    // puis on crée le fichier a la main test.db
    int exit = sqlite3_open("test.db", &db);

    // on verifie que l'exit fonctionne
    // constante qui renvoir un entier
    if(exit != SQLITE_OK) {
        cerr << "Error opening database: " << sqlite3_errmsg(db) << endl;
        sqlite3_close(db);
        return -1;
    } else {
        cout << "Database opened successfully" << endl;
    }

    // Creation de la table
    const char* sql = "CREATE TABLE IF NOT EXISTS user("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "firstname TEXT NOT NULL,"
                    "lastname TEXT NOT NULL,"
                    "email TEXT NOT NULL"
                    ");";
    

    // execution de la requete
    // pas de callback donc on utilise nullptr
    exit = sqlite3_exec(db, sql, nullptr, nullptr, &errmsg); 
    
    // on verifie que l'exit fonctionne
    if(exit != SQLITE_OK) {
        cerr << "Error creating table: " << sqlite3_errmsg(db) << endl;
    } else {
        cout << "Table created successfully" << endl;
    }

    // Inserer des données dans la table
    sql = "INSERT INTO user(firstname, lastname, email) VALUES "
            "('Mike','Gabriel','Dev@admin.ru'),"
            "('John','Doe','6M8eJ@example.com');";
    
    // execution de la requete
    exit = sqlite3_exec(db, sql, nullptr, nullptr, &errmsg);

    // on verifie que l'exit fonctionne
    if(exit != SQLITE_OK) {
        cerr << "Error inserting data: " << sqlite3_errmsg(db) << endl;
    } else {
        cout << "Data inserted successfully" << endl;
    }

    // Afficher les données de la table
    sql = "SELECT * FROM user;";

    // Préparer une déclaration SQLite
    sqlite3_stmt* stmt;

    // Préparer la requête SQL pour exécution
    // sqlite3_prepare_v2 prépare la requête SQL pour exécution
    // db est la base de données ouverte
    // sql est la requête SQL
    // -1 signifie que la longueur de la chaîne SQL est déterminée automatiquement
    // stmt est un pointeur vers la déclaration préparée
    // nullptr signifie qu'il n'y a pas de queue de requête à traiter
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    cout << "Liste des users :" << endl;
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        cout << "ID: " << sqlite3_column_int(stmt, 0) << endl;
        cout << "First name: " << sqlite3_column_text(stmt, 1) << endl;
        cout << "Last name: " << sqlite3_column_text(stmt, 2) << endl;
        cout << "Email: " << sqlite3_column_text(stmt, 3) << endl;
        cout << "----------------" << endl;
    }

    // Libérer la déclaration
    sqlite3_finalize(stmt);

    // Fermer la base de données
    sqlite3_close(db);
};