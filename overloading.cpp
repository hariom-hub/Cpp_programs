#include<iostream>
using namespace std;

class construct{

    public:

    //default constructor
    construct(){
        
        cout<<"hello world";
    }

    //parameterized constructor
    construct(int a,int b){

        int sum = a+b;
        cout<<"sum = "<<sum;
    }
};

int main(){

    
    construct obj1(10,20);
    construct obj();
    return 0;
}