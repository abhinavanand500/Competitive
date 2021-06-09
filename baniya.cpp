#include <iostream>
using namespace std;
int main()
{
    int start = 17, end = 62, k = 5;
    int count = 0;
    while (end >= start)
    {
        count += 1;
        end = end - 10;
    }
    cout << count;
}