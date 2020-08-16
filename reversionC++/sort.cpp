#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
void show(int a[])
{
    for (int i = 0; i < 6; ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int arr[6] = {10, 2, 30, 400, 5, 6};
    show(arr);
    sort(arr, arr + 6);
    // reverse(arr, arr + 6);
    show(arr);
    if (binary_search(arr, arr + 6, 10))
    {
        cout << "yes it is there.\n";
    }
    else
    {
        cout << "No\n";
    }
    vector<int> vect(arr, arr + 6);
    sort(vect.begin(), vect.end());
    for (int i = 0; i < 6; i++)
    {
        cout << vect[i] << " ";
    }
    cout << "\n";
    cout << *max_element(vect.begin(), vect.end()) << "\n";
    cout << *min_element(vect.begin(), vect.end()) << "\n";
    cout << accumulate(vect.begin(), vect.end(), 0) << "\n";
}