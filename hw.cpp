#include <iostream>
using namespace std;
//swap two numbers using referencing (pointers)

class swapNum
{

public:
    void swap(int *a, int *b)
    {

        int temp = *a;
        *a = *b;
        *b = temp;
    }
};

int main()
{

    swapNum obj;
    int num1, num2;
    cout << "Enter two numbers : \n";

    cin>>num1>>num2;

    cout << "Before swap num1 = " << num1 << " num2 = " << num2;

    obj.swap(&num1, &num2);
    cout << "\nAfter swap num1 = " << num1 << " num2 = " << num2;

    return 0;
}
