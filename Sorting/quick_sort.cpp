#include <iostream>
using namespace std;

int partition(int a[], int low, int high)
{
    int pi, i, j, temp;
    pi = a[low];
    i = low;
    j = high + 1;
    while (i < j)
    {
        do
        {
            i += 1;
        } while (i <= high && a[i] <= pi);
        do
        {
            j -= 1;
        } while (a[j] > pi);
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    a[low] = a[j];
    a[j] = pi;
    return j;
}
int qsort(int a[], int low, int high)
{
    int pi;
    if (low < high)
    {
        pi = partition(a, low, high);
        qsort(a, low, pi - 1);
        qsort(a, pi + 1, high);
    }
}

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
    qsort(a, 0, n - 1);
    cout << "The sorted array is :: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}