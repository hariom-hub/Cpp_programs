#include <iostream>

using namespace std;

// bubble sort

class work
{

public:
    void bubbleSort(int arr[], int size)
    {

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size - 1; j++)
            {

                if (arr[j] > arr[j + 1])
                {

                    // swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        //printing sorted array
        cout<<"Sorted Array is : \n";
        for(int i=0;i<size;i++){

            cout<<" "<<arr[i];
        }
    }
};


int main(){

    int arr[] = {2,4,5,1,8,3};
    int size = (sizeof(arr)/sizeof(arr[0]));
    work obj;
    obj.bubbleSort(arr,size);
    return 0;
}
