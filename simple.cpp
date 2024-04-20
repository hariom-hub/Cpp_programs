#include<iostream>
using namespace std;

class Simple{

    public:

    int *ptr;

    Simple(){
        ptr = new int(10); //run time new operator space 
        cout<<*ptr;
        delete ptr;
    }
};

int main(){

    Simple obj;
    return 0;
}