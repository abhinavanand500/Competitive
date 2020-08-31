#include <iostream>
using namespace std;
int arr[1001][1001];
void spiralPrint(int n)
{
    int i, j;
    cout << "The entered matrix is \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    int k = 0, l = 0;
    while (k < n && l < n)
    {
    }
}

int main()
{
    int n;
    cout << "Enter the order of MATRIX :: ";
    cin >> n;
    int i, j;
    cout << "Enter matrix ::\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    spiralPrint(n);
}