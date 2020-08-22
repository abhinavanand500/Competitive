#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q, temp;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        int count = 0;
        while (m > 0 && n > 0)
        {
            if (m == 1 && n == 1)
            {
                m = 0;
                n = 0;
                break;
            }
            if (m >= n)
            {
                m -= 2;
                n -= 1;
                count++;
            }
            else if (n > m)
            {
                m -= 1;
                n -= 2;
                count++;
            }
        }
        cout << count << "\n";
    }
}