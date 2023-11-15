#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <mysql_driver.h>
#include <mysql_connection.h>

class Database {
private:
    sql::mysql::MySQL_Driver* driver;
    sql::Connection* con;
public:
    Database();
    ~Database();
    bool connect();
    bool disconnect();
    bool searchProduct(const std::string& searchTerm);
    bool addToCart(int productId, int quantity);
};

#endif 