#include <iostream>
#include "database.h"

int main() {
    Database db;
    if (db.connect()) {
        std::string searchTerm = "search term";
        if (db.searchProduct(searchTerm)) {
            int productId = 1;
            int quantity = 2;
            if (db.addToCart(productId, quantity)) {
                std::cout << "Product added to the cart successfully!" << std::endl;
            }
            else {
                std::cout << "Failed to add product to the cart." << std::endl;
            }
        }
        else {
            std::cout << "Product not found." << std::endl;
        }
        db.disconnect();
    }
    else {
        std::cout << "Failed to connect to the database." << std::endl;
    }

    return 0;
}