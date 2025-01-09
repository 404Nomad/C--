#include <sqlite3.h>
#include "sqlite_module.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// init de la connexion
int sqlite_init(SQLiteConnection* con, const char* db_file) {
    
    // ouverture de la base
    int result = sqlite3_open(db_file, &con->db);

    // si l'ouverture ne fonctionne pas
    if(result != SQLITE_OK) {
        con->errmsg = strdup(sqlite3_errmsg(con->db));
        return result;
    } 

    // si tout va bien
    con->errmsg = nullptr;
    return SQLITE_OK;
}

//fermer la connexion
void sqlite_close(SQLiteConnection* con) {
    if(con->db) {
        sqlite3_close(con->db);
        con->db = nullptr;
    }
    if(con->errmsg) {
        free(con->errmsg);
        con->errmsg = nullptr;
    }
}

// fonction execute requete
int sqlite_execute(SQLiteConnection* con, const char* sql) {

    // on instancie une variable qui va stocker le message d'erreur
    char* errmsg = nullptr;

    // on execute la requete
    int result = sqlite3_exec(con->db, sql, nullptr, nullptr, &errmsg);

    if (result != SQLITE_OK) {
        con->errmsg = strdup(errmsg);
        sqlite3_free(errmsg);
    } 
    return result;
}

// fonction read
int sqlite_query(SQLiteConnection* con, const char* sql, int(*callback)(void*,int,char**,char**), void* data) {
    
    // on instancie une variable qui va stocker le message d'erreur
    char* errmsg = nullptr;

    // on interoge la base
    int result = sqlite3_exec(con->db, sql, callback, data, &errmsg);

    if (result != SQLITE_OK) {
        con->errmsg = strdup(errmsg);
        sqlite3_free(errmsg);
    } 
    return result;
}