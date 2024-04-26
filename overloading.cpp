#include<iostream>
using namespace std;

class Simple{

    public:
    int data;

    Simple(int value){

        data = value;
    }
    void operator ++(){

        ++data;
    }

    void show(){
        cout<<"data = "<<data;
    }
};

int main(){

    Simple obj(10);
    ++obj;
    obj.show();
}