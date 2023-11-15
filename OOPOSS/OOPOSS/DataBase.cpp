#include "database.h"

Database::Database() {
    driver = sql::mysql::get_mysql_driver_instance();
    con = nullptr;
}

Database::~Database() {
    delete con;
}

bool Database::connect() {
    try {
        con = driver->connect("tcp://127.0.0.1:3306", "username", "password");
        con->setSchema("online_shopping_cart");
        return true;
    }
    catch (sql::SQLException& e) {
        return false;
    }
}

bool Database::disconnect() {
    try {
        delete con;
        return true;
    }
    catch (sql::SQLException& e) {
        return false;
    }
}

bool Database::searchProduct(const std::string& searchTerm) {
    return true; 

bool Database::addToCart(int productId, int quantity) {
    return true; 
}
