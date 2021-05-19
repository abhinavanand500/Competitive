#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> web(n);
    for (int i = 0; i < n; i++)
    {
        cin >> web[i];
    }
    cin >> m;
    vector<int> app(m);
    for (int i = 0; i < m; i++)
    {
        cin >> app[i];
    }

    if (n == 0 || m == 0)
    {
        cout << "0\n";
        return 0;
    }

    int wi = 0, ai = 0;
    int ans = 0;
    char c = ' ';
    while (wi < n && ai < m)
    {
        if (web[wi] < app[ai])
        {
            if (c != 'w')
            {
                ans++;
                c = 'w';
            }
            wi++;
        }
        else
        {
            if (c != 'a')
            {
                ans++;
                c = 'a';
            }
            ai++;
        }
        cout << c << endl;
    }
    // cout << ans << endl;

    return 0;
}