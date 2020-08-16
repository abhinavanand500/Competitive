#include <iostream>
using namespace std;
int main()
{
    int n, len1, count1 = 0, count0 = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'z')
        {
            count0++;
        }
        else if (s[i] == 'n')
        {
            count1++;
        }
    }
    while (count1--)
    {
        cout << "1 ";
    }
    while (count0--)
    {
        cout << "0 ";
    }
    cout << "\n";
}