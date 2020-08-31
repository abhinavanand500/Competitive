#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}
int main()
{
    int num, n = 0, x, sum = 0, stored, digit;
    cout << "Enter the number :: ";
    cin >> num;
    x = stored = num;
    while (x != 0)
    {
        x = x / 10;
        n++;
    }
    while (stored != 0)
    {
        digit = stored % 10;
        sum += power(digit, n);
        stored = stored / 10;
    }
    if (num == sum)
    {
        cout << "Armstrong Number.\n";
    }
    else
    {
        cout << "Not an Armstrong number.\n";
    }
}