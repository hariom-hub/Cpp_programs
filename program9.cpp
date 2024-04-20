//array sum

#include<iostream>

using namespace std;

class Arr{

    public:

    void ArraySum(int arr[],int size){

        int sum = 0;
        for(int i=0;i<size;i++){

            sum = sum+arr[i];
        }
        cout<<"\n Sum of array elements is : "<<sum;
    }
};

int main(){

    int arr[] = {10,20,5,8,19};
    int size = (sizeof(arr)/sizeof(arr[0]));

    Arr obj;
    obj.ArraySum(arr,size);
    return 0;
}