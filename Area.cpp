#include <iostream>
using namespace std;

class Area
{

public:
    Area(int length, int breadth)
    {

        int area = length * breadth;
        cout << "Area of rectangle = " << area;
    }
};

int main()
{

    int length, breadth;
    cout << "\nEnter length and breadth : \n";
    cin >> length >> breadth;

    Area obj(length, breadth);
    return 0;
}