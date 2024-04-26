#include<iostream>
using namespace std;

class Base{

    public:
    int value;
};

class derived: public Base{

    public:
    int value1;

    void addition(){

        value = 10,value1 = 20;

        cout<<"total = "<<value1+value;

    }
};

int main(){

    derived obj;
    obj.addition();
    return 0;
}