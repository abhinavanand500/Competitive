#include <iostream>
using namespace std;
int main()
{
    int n, n1 = 0, n2 = 1, sum = 0;
    cout << "Enter the range ::  ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << n1 << "  ";
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    cout << "\n";
}