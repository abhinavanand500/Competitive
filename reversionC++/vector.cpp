#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << "\t";
    }
    cout << "\n";
    cout << min(7, 4);
}

// 34839d303290b641aa588d94da796ca60c97701d

// 257c74cc42cbe4801f9cef8553117a4b8559d1e8