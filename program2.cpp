#include <iostream>
using namespace std;

class Student
{

public:
    int id, age;

    void show(int val1, int val2)
    {

        this->id = val1;
        this->age = val2;
        cout << "\nID = " << id << " age = " << age;
    }
};

int main()
{

    Student obj1, obj2;
    obj1.show(123, 20);
    obj2.show(345, 21);
    return 0;
}