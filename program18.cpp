#include <iostream>
using namespace std;

class test2; // Forward declaration of class test2

class test1 {
    int a;
public:
    void inputa() {
        cout << "Enter value of a : \n";
        cin >> a;
    }
    friend void comp(test1, test2); // Friend function declaration
};

class test2 {
    int b;
public:
    void inputb() {
        cout << "Enter value of b : \n";
        cin >> b;
    }
    friend void comp(test1, test2); // Friend function declaration
};

void comp(test1 t1, test2 t2) {
    if (t1.a > t2.b) {
        cout << "\nvalue of a is greater than b";
    } else if (t2.b > t1.a) {
        cout << "\nvalue of b is greater than a";
    } else {
        cout << "\nBoth a and b are equal";
    }
}

int main() {
    test1 obj1;
    test2 obj2;
    obj1.inputa();
    obj2.inputb();
    comp(obj1, obj2);
    return 0;
}