#include <iostream>
using namespace std;

class NumberPair {
public:
    int x, y;

    NumberPair() {
        x = 3;
        y = 4;
    }

    NumberPair(int a, int b) {
        x = a;
        y = b;
    }

    NumberPair(const NumberPair &obj) {
        x = obj.x;
        y = obj.y;
    }

    void display() {
        cout << "x = " << x << "\n";
        cout << "y = " << y << "\n";
    }
};

int main() {
    NumberPair n1;
    NumberPair n2(2, 3);
    NumberPair n3(n2);
    NumberPair n4(n1);

    cout << "---n1 : Default Constructor---\n";
    n1.display();
    cout << "---n2 : Parameterized Constructor---\n";
    n2.display();
    cout << "---n3 : Copy Constructor of n2---\n";
    n3.display();
    cout << "---n4 : Copy Constructor of n1---\n";
    n4.display();

    return 0;
}
