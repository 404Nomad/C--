#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <cppconn/exception.h>
#include <iostream>

// g++ mybase.cpp -o main -lmysqlcppconn
// ./main

int main() {
    try
    {
        // creation de la connexion
        sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
        // ligne de connexion
        //nom use cpp
        //mot de passe mycpp
        std::unique_ptr<sql::Connection> con(driver->connect("tcp://127.0.0.1:3310","cpp","mycpp"));
    
        // connexion à la base
        // nom bdd = cpp
        con->setSchema("cpp");

        // création de la table
        std::unique_ptr<sql::Statement> stmt(con->createStatement());
        stmt->execute("CREATE TABLE IF NOT EXISTS user("
                    "id INT PRIMARY KEY AUTO_INCREMENT,"
                    "firstname VARCHAR(50) NOT NULL,"
                    "lastname VARCHAR(50) NOT NULL,"
                    "email VARCHAR(200) NOT NULL"
                    ");");

        // insertion des données
        stmt->execute("INSERT INTO user(firstname, lastname, email) VALUES "
            "('Mike','Gabriel','Dev@admin.ru'),"
            "('John','Doe','6M8eJ@example.com');");
        // message de confirmation


        // recuperation des données
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT * FROM user;"));
        while (res->next()) {
            std::cout << "ID : " << res->getInt("id") << " | "
                    << "firstname :" << res->getString("firstname") << " | "
                    << "lastname :" << res->getString("lastname") << " | "
                    << "email :" << res->getString("email") << std::endl
                    << "-------------------------------------------------------------------" << std::endl;

        }
    }
    catch(sql::SQLException& e)
    {

    }
    
    return 0;
}