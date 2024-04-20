#include <iostream>

using namespace std;

class Arr
{

public:
    void findGreatest(int arr[],int size)
    {

        int greatest = arr[0];

        for (int i = 0; i < size; i++)
        {

            if (arr[i] > greatest)
            {
                greatest = arr[i];
            }
        }
        cout << "Greatest number in the array is : " << greatest;
    }
};

int main()
{

    int arr[] = {10, 20, 30, 13, 2, 17, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    Arr obj;
    obj.findGreatest(arr,size);
    return 0;
}