#include <iostream>

using namespace std;

class Pattern
{

public:
    void printSquarePattern(int rows, int cols)
    {

        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= cols; j++)
            {
                cout << "* ";
            }
            cout << "\n";
        }
    }
};

int main()
{

    Pattern obj;
    obj.printSquarePattern(5, 10);
    return 0;
}