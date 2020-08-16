#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    while (n--)
    {
        string s1, s3;
        cin >> s1;
        string s2(s1, s1.length() - 2, s1.length() - 1);
        for (i = 0; i < s1.length() - 2; i++)
        {
            if (s1[i] != s1[i + 1] || s1[i] != s1[i - 1])
            {
                s3 += s1[i];
            }
        }
        // cout << s2 << "\n";
        s3.append(s2);
        cout << s3 << "\n";
    }
}