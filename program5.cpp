#include <iostream>

using namespace std;

class construct
{

public:
    int n;
    construct()
    {

        cout << "Enter a number : \n";
        cin >> n;

        long factorial = 1;

        for (int i = 1; i <= n; i++)
        {

            factorial = factorial * i;
        }
        cout << "\nFactorial of " << n << " is : " << factorial;
    }
};

int main()
{

    construct obj;
    return 0;
}