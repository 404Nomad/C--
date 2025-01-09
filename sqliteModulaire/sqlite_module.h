#ifndef SQLITE_MODULE_H
#define SQLITE_MODULE_H
#include <sqlite3.h>
using namespace std;

// déclaration du pointer et de l'erreur dans une struct
typedef struct {
    sqlite3* db;
    char* errmsg;
} SQLiteConnection;

// fonction init connexion
int sqlite_init(SQLiteConnection* con, const char* db_file);

//fermer la connexion
void sqlite_close(SQLiteConnection* con);

// fonction execute requete
int sqlite_execute(SQLiteConnection* con, const char* sql);

// fonction read
int sqlite_query(SQLiteConnection* con, const char* sql, int(*callback)(void*,int,char**,char**), void* data);

#endif