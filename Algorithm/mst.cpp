#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of matrix :: ";
    cin >> n;
    int i, j, arr[n][n];
    cout << "Enter the matrix :: ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                arr[i][j] = 999;
            }
        }
    }
}