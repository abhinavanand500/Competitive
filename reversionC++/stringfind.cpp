#include <iostream>
using namespace std;

char find(string s)
{
    char ans[2];
    string s1;
    for (int i = 0; i < s.length(); i++)
    {
        s1 = "";
        ans[0] = s[i];
        s1.append(s, i + 1, s.length() - i - 1);
        if (s1.find(ans[0]) != -1)
        {
            return ans[0];
        }
    }
    return -1;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1;
        if (find(s1) != -1)
        {
            cout << find(s1) << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}