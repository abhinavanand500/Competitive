#include <iostream>
using namespace std;
int main()
{
    int n, i, j, temp;
    cout << "Enter the size of array :: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements :: \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The sorted array is :: ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}