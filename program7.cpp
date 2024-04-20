// binary search

#include <iostream>

using namespace std;

class Search
{

public:
    int BinarySearch(int arr[], int k, int size)
    {

        for (int i = 0; i < size; i++)
        {

            if (arr[i] == k)
            {

                return i; // element foun at index i
            }
        }
        return -1; // not found
    }
};

int main()
{

    Search obj;

    int arr[] = {1, 4, 7, 13, 15};

    int k = 7;
    int size = (sizeof(arr) / sizeof(arr[0]));

    int result = obj.BinarySearch(arr, k, size);

    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Val is found at index : " << result;
    }
    return 0;
}