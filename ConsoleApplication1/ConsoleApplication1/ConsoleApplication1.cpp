#include <iostream>
#include "ShoppingCart.h"
using namespace std;

void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
    // Implement the menu options as described in the instructions
    /* Type your code here */
}

int main() {
    // Prompt for customer name and date
    cout << "Enter customer's name:" << endl;
    string customerName;
    getline(cin, customerName);

    cout << "Enter today's date:" << endl;
    string currentDate;
    getline(cin, currentDate);

    // Create a ShoppingCart object
    ShoppingCart myCart(customerName, currentDate);

    // Display customer name and date
    cout << "\nCustomer name: " << myCart.GetCustomerName() << endl;
    cout << "Today's date: " << myCart.GetDate() << endl;

    // Continue with the menu and execution logic
    /* Type your code here */

    return 0;
}
