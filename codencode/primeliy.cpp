#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n == 1)
        return false;
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}
int main()
{
    int n, i;
    cin >> n;
    int ans = isPrime(n);
    if (ans)
        cout << "It is a prime Number\n";
    else
        cout << "It is not a Prime Number\n";
}