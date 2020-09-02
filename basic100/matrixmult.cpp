#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k, sum = 0;
    cout << "Enter the order of matrix ::  ";
    cin >> n;
    int arr1[n][n], arr2[n][n], arr3[n][n];
    cout << "Enter the first matrix :: ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter the second matrix :: ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout << "\nThe multiplication matrix is :: \n\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                sum = sum + (arr1[i][k] * arr2[k][j]);
            }
            arr3[i][j] = sum;
            sum = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }
}