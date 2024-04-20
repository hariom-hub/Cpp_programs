#include <iostream>

using namespace std;

class Calculator
{

public:
    void sum(int num1, int num2)
    {

        int sum = num1 + num2;
        cout << "sum = " << sum;
    }

    void subtract(int num1, int num2)
    {

        int diff = num1 - num2;
        cout << "difference = " << diff;
    }

    void multiply(int num1, int num2)
    {

        int prod = num1 * num2;
        cout << "multiply = " << prod;
    }

    void divide(int num1, int num2)
    {

        if (num2 == 0)
        {
            cout << "value of denominator cannot be zero";
        }
        else
        {

            float divide = (float)num1 / num2;
            cout << "Division = " << divide;
        }
    }

    void modulus(int num1, int num2)
    {

        int modulus = num1 % num2;

        cout << "modulus = " << modulus;
    }
};

int main()
{

    int num1;
    int num2;
    int choice;
    cout << "Enter two numbers : \n";
    cin >> num1 >> num2;

    Calculator obj;
    cout << "choices are : \n";

    cout << "1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n 5 for modulus";
    cout << "\n Enter the choices : \n";
    cin>>choice;
    
    

    switch (choice)
    {

    case 1:
        obj.sum(num1, num2);
        break;
    case 2:
        obj.subtract(num1, num2);
        break;
    case 3:
        obj.multiply(num1, num2);
        break;
    case 4:
        obj.divide(num1, num2);
        break;
    case 5:
        obj.modulus(num1, num2);
        break;
    default:
        cout << "Invalid case entered";
        break;
    }
}