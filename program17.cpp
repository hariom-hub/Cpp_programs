#include<iostream>

using namespace std;

class Calculate{

    public:
    
    void printSI(float principal,float rate,float time){

        float SI = (float)((principal*rate*time)/100);

        cout<<"Simple interest calculated is : "<<SI<<"Rs";
    }


};

int main(){

    float principal,rate,time;

    cout<<"Enter the principal amount : \n";
    cin>>principal;
    cout<<"Enter the rate per year : \n";
    cin>>rate;
    cout<<"Enter the time duration in year : \n";
    cin>>time;

    Calculate obj;
    obj.printSI(principal,rate,time);
    return 0;
}