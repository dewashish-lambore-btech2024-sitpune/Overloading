#include <iostream>
using namespace std;

class Pair {
public:
    int x, y;

    Pair() {
        x = 0;
        y = 0;
    }

    Pair(int a) {
        x = a;
        y = 0;
    }

    Pair(int a, int b) {
        x = a;
        y = b;
    }

    void show() {
        cout << "x = " << x << "\n";
        cout << "y = " << y << "\n";
    }
};

int main() {
    Pair p1;        // Default constructor
    Pair p2(5);     // Single-parameter constructor
    Pair p3(2, 3);  // Two-parameter constructor

    cout << "---p1 : Default Constructor---\n";
    p1.show();
    cout << "---p2 : Constructor with 1 parameter---\n";
    p2.show();
    cout << "---p3 : Constructor with 2 parameters---\n";
    p3.show();

    return 0;
}
