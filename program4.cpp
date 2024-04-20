#include <iostream>
using namespace std;

class parent1
{

public:
    int num1;
    void input1()
    {

        cout << "Enter the first number : \n";
        cin >> num1;
    }
};

class parent2
{

public:
    int num2;

    void input2()
    {

        cout << "Enter the second number : \n";
        cin >> num2;
    }
};

class child : public parent1, public parent2
{

public:
    void task()
    {

        int mul = num1 * num2;
        cout<<"\n Multiplication of two numbers : "<<mul;
    }
};

int main(){

    child obj;
    obj.input1();
    obj.input2();
    obj.task();
    return 0;
}