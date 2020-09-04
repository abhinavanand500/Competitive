#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k, temp, mini;
    cout << "Enter the size of array :: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements :: \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The sorted array is :: ";
    for (i = 0; i < n - 1; i++)
    {
        mini = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[mini])
            {
                mini = j;
            }
        }
        if (mini != i)
        {
            temp = a[i];
            a[i] = a[mini];
            a[mini] = temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}