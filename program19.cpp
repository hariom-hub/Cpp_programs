#include <iostream>
using namespace std;

class Parent {
public:
    int num;

    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void show() {
        cout << "\nValue of number entered is: " << num << endl;
    }
};

class Child : public Parent {
public:
    void changeValue() {
        num = 20;
        cout << "Updated value of number is: " << num << endl;
    }
};

int main() {
    Parent obj;
    Child obj1;

    // Using the Parent object
    obj.input();
    obj.show();

    // Using the Child object
    obj1.input();
    obj1.show();
    obj1.changeValue();
    obj1.show();

    return 0;
}
