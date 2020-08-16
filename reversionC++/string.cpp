#include <iostream>
using namespace std;
int main()
{
    string s1("Abhinav Anand");
    string s2(s1);
    string s3(5, '#');
    string s4(s1, 2, 3);
    string s5(s1.begin(), s1.begin() + 4);
    string s6 = s4;
    s3.append(s1);
    s3.append(s1, 0, 3);
    int len = s1.length();
    const char *charstr = s1.c_str();
    s4.clear();
    cout << s1 << "\n";
    cout << s2 << "\n";
    cout << s3 << "\n";
    cout << s4 << '\n';
    cout << s5 << '\n';
    cout << s6 << "\n";
    cout << len << "\n";
    cout << charstr << "\n";
    cout << s2.find("nav") << "\n"; //-->Returns position of substring or -1 if not found