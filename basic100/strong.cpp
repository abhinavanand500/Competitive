#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int n, num, sum = 0, digit;
    cout << "Enter the number :: ";
    cin >> n;
    num = n;
    while (num != 0)
    {
        digit = num % 10;
        sum += fact(digit);
        num = num / 10;
    }
    if (n == sum)
    {
        cout << "Strong Number.\n";
    }
    else
    {
        cout << "Not a Strong Number.\n";
    }
}