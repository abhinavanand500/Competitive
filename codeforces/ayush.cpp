#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 5 == 0 && n % 7 == 0)
    {
        cout << "Hello World" << endl;
    }
    else if (n % 5 == 0)
    {
        cout << "Hello" << endl;
    }
    else if (n % 7 == 0)
    {
        cout << "World" << endl;
    }
}