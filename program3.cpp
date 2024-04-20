#include <iostream>
using namespace std;

class cube
{

public:
    int side;

    void show()
    {

        cout << "side = " << side;
    }
};

int main()
{

    cube obj;
    cube *obj1;

    obj1 = &obj;

    int cube ::*ptr = &cube::side;

    obj1->*ptr = 20;
    obj1->show();
}