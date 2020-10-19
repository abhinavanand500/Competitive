#include <iostream>
using namespace std;
#include <cstdlib>
int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, num, count = 0, a[20][20];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                n = i;
                k = j;
            }
        }
    }
    int ans = abs(n - 2) + abs(k - 2);
    cout << ans << endl;
}
