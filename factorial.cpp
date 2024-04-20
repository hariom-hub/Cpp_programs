#include<iostream>
using namespace std;

class Factorial{

    public:
    Factorial(int num){

        long factorial = 1;

        for(int i=1;i<=num;i++){
            factorial = factorial * i;
        }

        cout<<"Factorial of "<<num<<" is : "<<factorial;
    }
};

int main(){

    Factorial obj(5);
    return 0;
}