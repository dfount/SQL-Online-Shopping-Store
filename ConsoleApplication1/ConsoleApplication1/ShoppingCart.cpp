#include <iostream>
#include <iomanip>
#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2023";
}

ShoppingCart::ShoppingCart(string name, string date) {
    customerName = name;
    currentDate = date;
}

string ShoppingCart::GetCustomerName() {
    return customerName;
}

string ShoppingCart::GetDate() {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
    cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string itemName) {
    for (size_t i = 0; i < cartItems.size(); ++i) {
        if (cartItems[i].GetName() == itemName) {
            cartItems.erase(cartItems.begin() + i);
            return;
        }
    }
    cout << "Item not found in cart. Nothing removed." << endl;
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
    for (size_t i = 0; i < cartItems.size(); ++i) {
        if (cartItems[i].GetName() == item.GetName()) {
            if (item.GetDescription() != "none") {
                cartItems[i].SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0.0) {
                cartItems[i].SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                cartItems[i].SetQuantity(item.GetQuantity());
            }
            return;
        }
    }
    cout << "Item not found in cart. Nothing modified." << endl;
}

int ShoppingCart::GetNumItemsInCart() {
    int totalQuantity = 0;
    for (const auto& item : cartItems) {
        totalQuantity += item.GetQuantity();
    }
    return totalQuantity;
}

double ShoppingCart::GetCostOfCart() {
    double totalCost = 0.0;
    for (const auto& item : cartItems) {
        totalCost += item.GetQuantity() * item.GetPrice();
    }
    return totalCost;
}

void ShoppingCart::PrintTotal() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;
    for (const auto& item : cartItems) {
        item.PrintItemCost();
    }
    cout << endl << "Total: $" << fixed << setprecision(2) << GetCostOfCart() << endl;
}

void ShoppingCart::PrintDescriptions() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl;
    cout << "Item Descriptions" << endl;
    for (const auto& item : cartItems) {
        item.PrintItemDescription();
    }
    cout << endl;
}
