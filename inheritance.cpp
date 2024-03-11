#include <iostream>

using namespace std;

class Parent
{

public:
    int num;
    void printNum()
    {
        num = 10;
        cout << num;
    }
};

class child : public Parent
{

public:
    void showNum()
    {
        num = 20;
        cout << num;
    }
};

int main()
{

    child object;
    object.showNum();
    return 0;
}