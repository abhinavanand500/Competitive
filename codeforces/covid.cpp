#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <stack>
#include <iterator>
#include <map>
#include <list>
#include <fstream>
#include <unordered_map>
#include <set>
#include <queue>
#define int long long
#define double long double
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pip pair<int, pair<int, int>>
#define viv vector<vector<int>>
#define vip vector<pair<int, int>>
#define vi vector<int>
#define mii map<int, int>
#define li list<int>
#define qu queue<int>
#define vd vector<double>
#define set set<int>
#define stack stack<int>
#define fi first
#define se second
#define mem(x, y) memset(x, y, sizeof(x))
#define pq priority_queue<int>
#define ps(x, y) fixed << setprecision(y) << x
using namespace std;
int z = 1000000007;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Write Your code here
    int t, i;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        sort(arr1, arr1 + n);
        int aa = n / 4;
        int bb = aa + aa;
        int cc = aa + aa + aa;
        if (arr1[aa] == arr1[aa - 1] || arr1[bb] == arr1[bb - 1] || arr1[cc] == arr1[cc - 1])
        {
            cout << "-1"
                 << "\n";
        }
        else
        {
            cout << arr1[aa] << " " << arr1[bb] << " " << arr1[cc] << endl;
        }
    }
}