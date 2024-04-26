#include <iostream>
using namespace std;

class Task
{

public:
    int a = 10;
    int b = 20;

    Task()
    {
        int sum = a + b;
        cout << "sum of a and b is : " << sum;
    }

    Task(int x, int y)
    {

        int sum2 = x+y;
        cout<<"\nsum 2 = "<<sum2;
    }
};

int main(){

    Task obj;
    Task obj2(50,100);
    return 0;
}