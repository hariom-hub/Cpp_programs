#include<iostream>
using namespace std;

class practice{

    public:

    static int value;

    practice(){
        value++;
        cout<<"\nvalue = "<<value;
    }
    ~practice(){
        value--;
        cout<<"\nvalue = "<<value;
    }
    
};

int practice::value = 10;

int main(){

    practice obj1;
    practice obj2;
    return 0;
}