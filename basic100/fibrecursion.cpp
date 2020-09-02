#include <iostream>
using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n, i = 0;
    cout << "Enter the number ::  ";
    cin >> n;
    for (int k = 0; k < n; k++)
    {
        cout << fib(i) << "  ";
        i++;
    }
}