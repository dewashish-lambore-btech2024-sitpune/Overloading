#include <iostream>
using namespace std;

class Item {
public:
    string name;
    int pricePerUnit;
    int qty;

    Item(string n, int p, int q) {
        name = n;
        pricePerUnit = p;
        qty = q;
    }

    int getTotal() const {
        return pricePerUnit * qty;
    }

    int operator+(const Item &other) {
        return this->getTotal() + other.getTotal();
    }

    friend ostream& operator<<(ostream &out, const Item &i) {
        out << "Item: " << i.name << "\n";
        out << "Quantity: " << i.qty << "\n";
        out << "Unit Price: " << i.pricePerUnit << "\n";
        out << "Total Price: " << i.getTotal() << "\n";
        return out;
    }
};

int main() {
    Item item1("Shoes", 500, 2);
    Item item2("Pen", 20, 5);

    cout << item1 << endl;
    cout << item2 << endl;

    int combinedTotal = item1 + item2;
    cout << "Combined Total: " << combinedTotal << endl;

    return 0;
}
