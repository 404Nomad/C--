#include <stdio.h>
#include <stdlib.h>
#include "sqlite_module.h"

int print_callback(void* data, int argc, char** argv, char** colname) {
    for(int i = 0; i < argc; i++) {
        printf("%s: %s\n", colname[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

int main() {
    SQLiteConnection con;

    // init connexion
    if(sqlite_init(&con, "exemple.db") != SQLITE_OK) {
        fprintf(stderr, "error: %s\n", con.errmsg);
        return -1;
    }

    //creation de la table
    const char* sql = "CREATE TABLE IF NOT EXISTS user("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                    "firstname TEXT NOT NULL,"
                    "lastname TEXT NOT NULL,"
                    "email TEXT NOT NULL"
                    ");";
    if(sqlite_execute(&con, sql) != SQLITE_OK) {
        fprintf(stderr, "error: %s\n", con.errmsg);
        return -1;
    }

    //insertion des données
    sql = "INSERT INTO user (firstname, lastname, email) VALUES ('John', 'Doe', 'VxM9C@example.com');";
    if(sqlite_execute(&con, sql) != SQLITE_OK) {
        fprintf(stderr, "error: %s\n", con.errmsg);
        return -1;
    }

}