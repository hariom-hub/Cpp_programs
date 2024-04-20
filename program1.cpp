#include<iostream>

using namespace std;

class pointer{

    public:
    void printMul(int *a,int *b){

        int sum = *a+*b;
        cout<<"\nsum of two numbers is : "<<sum;
    }
};

int main(){

    int num1,num2;
    cout<<"Enter two numbers : \n";
    cin>>num1>>num2;
    pointer obj;
    obj.printMul(&num1,&num2);
    return 0;
}