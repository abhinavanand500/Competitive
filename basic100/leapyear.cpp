#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the year :: ";
    cin >> n;
    if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
    {
        cout << "Yes it is a leap year.\n";
    }
    else
    {
        cout << "It is not a leap year.\n";
    }
}