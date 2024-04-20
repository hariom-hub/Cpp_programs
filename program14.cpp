#include<iostream>
using namespace std;

//printing pyramid pattern
class Pattern{

    public:

    void printPyramidPattern(int n){

        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<"\n";
        }
    }
};

int main(){

    Pattern obj;
    obj.printPyramidPattern(5);
}