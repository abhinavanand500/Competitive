#include <iostream>
#include <string>
using namespace std;
int main()
{
    char temp;
    string s;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l / 2; i++)
    {
        swap(s[i], s[l - i - 1]);
    }
    cout << s << endl;
}