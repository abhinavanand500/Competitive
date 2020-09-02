#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 20;
    b = 30;
    a = b + a;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
}