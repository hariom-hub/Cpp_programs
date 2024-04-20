// reversing a number

#include <iostream>

using namespace std;

class Task
{

public:
    void reverseNum(int num)
    {

        int remainder;
        int reverse = 0;

        cout << "Original number = " << num;
        while (num != 0)
        {

            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num = num / 10;
        }
        cout << "\nReversed number = " << reverse;
    }
};

int main()
{

    int num;

    cout << "Enter a number : ";
    cin >> num;
    Task obj;
    obj.reverseNum(num);
    return 0;
}