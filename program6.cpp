#include <iostream>

using namespace std;

class Area_Circle
{

public:
    Area_Circle(float rad)
    {

        float pi = 3.14;

        float area = pi * rad * rad;

        cout << "\nArea of circle is : " << area;
    }
};

int main()
{

    Area_Circle(3.57);
    return 0;
}
