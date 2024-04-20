// 2-d matrix sum

#include <iostream>

using namespace std;

class Sum
{

public:
    void matrixSum()
    {
        
        int n;
        cout << "Enter the size of the matrix : \n";
        cin >> n;
        int matrix1[n][n];
        int matrix2[n][n];
        int sum[n][n] = {0};

        // matrix 1 input
        cout << "\nEnter the elements of first matrix : \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix1[i][j];
            }
        }

        cout << "\nEnter the elements of second matrix : \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix2[i][j];
            }
        }
        cout<<"Sum of two matrices is : \n";

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                sum[i][j] = sum[i][j] + matrix1[i][j] + matrix2[i][j];
                cout<<sum[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};

int main()
{

    Sum obj;
    obj.matrixSum();
    return 0;
}