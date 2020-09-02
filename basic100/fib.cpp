#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, c;
    cout << "Enter the number ::  ";
    cin >> n;
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << a << "  ";
        c = a + b;
        a = b;
        b = c;
    }
}