#include <iostream>
#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase(string name, double price, int quantity) {
    itemName = name;
    itemPrice = price;
    itemQuantity = quantity;
    itemDescription = "none";
}

void ItemToPurchase::SetName(string name) {
    itemName = name;
}

void ItemToPurchase::SetPrice(double price) {
    itemPrice = price;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;
}

void ItemToPurchase::SetDescription(string description) {
    itemDescription = description;
}

string ItemToPurchase::GetName() const {
    return itemName;
}

double ItemToPurchase::GetPrice() const {
    return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

string ItemToPurchase::GetDescription() const {
    return itemDescription;
}

void ItemToPurchase::PrintItemCost() const {
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemQuantity * itemPrice) << endl;
}

void ItemToPurchase::PrintItemDescription() const {
    cout << itemName << ": " << itemDescription << endl;
}
