#include <iostream>
using namespace std;

void addToCart(string item, int qty) {
    cout << "CART\n";
    cout << "Item: " << item << "\n";
    cout << "Quantity: " << qty << "\n";
    cout << "-------------------------\n";
}

void checkout(string item, int pricePerUnit, int qty) {
    int total = pricePerUnit * qty;
    cout << "CHECKOUT\n";
    cout << "Item: " << item << "\n";
    cout << "Quantity: " << qty << "\n";
    cout << "Unit Price: " << pricePerUnit << "\n";
    cout << "Total: " << total << "\n";
    cout << "-------------------------\n";
}

int main() {
    string itemName;
    int unitPrice, quantity;

    cout << "Enter item name, quantity, and unit price: ";
    cin >> itemName >> quantity >> unitPrice;

    addToCart(itemName, quantity);
    checkout(itemName, unitPrice, quantity);

    addToCart("Pen", 5);
    checkout("Notebook", 50, 2);

    return 0;
}
