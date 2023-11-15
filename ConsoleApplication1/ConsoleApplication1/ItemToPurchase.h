#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
private:
    string itemName;
    double itemPrice;
    int itemQuantity;
    string itemDescription;

public:
    ItemToPurchase(string name = "none", double price = 0.0, int quantity = 0);
    void SetName(string name);
    void SetPrice(double price);
    void SetQuantity(int quantity);
    void SetDescription(string description);
    string GetName() const;  // Add const qualifier
    double GetPrice() const;  // Add const qualifier
    int GetQuantity() const;  // Add const qualifier
    string GetDescription() const;  // Add const qualifier
    void PrintItemCost() const;  // Add const qualifier
    void PrintItemDescription() const;  // Add const qualifier
};

#endif
