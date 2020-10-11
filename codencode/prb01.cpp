#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int n, t, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (isPrime(n))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}