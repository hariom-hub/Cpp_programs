#include <iostream>

using namespace std;

class Greater
{

public:
    void CheckGrater(int x, int y)
    {

        if (x > y)
        {
            cout << "\nnum1 is greater than num2.";
        }
        else
        {
            cout << "\nnum2 is greater than num1.";
        }
    }
};

int main()
{
    int num1;
    int num2;
    cout << "Enter two numbers : \n";
    cin >> num1 >> num2;

    Greater obj;
    obj.CheckGrater(num1, num2);
    return 0;
}