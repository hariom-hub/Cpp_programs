#include <iostream>
using namespace std;

class Practice
{

public:
    int height;
    float radius;

    Practice(int height, float radius)
    {

        this->height = height;
        this->radius = radius;
        cout << "Enter the height and radius of cylinder : \n";
        cin >> height >> radius;
    }
    Practice()
    {

        float volume = 3.14 * radius * radius * height;
        cout << "\nVolume of cylinder is : " << volume;
    }
};