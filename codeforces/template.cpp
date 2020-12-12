#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<stack>
#include <iterator>
#include <map>
#include<list>
#include <fstream>
#include<unordered_map>
#include<set>
#include<queue>
#define int long long
#define double long double
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pip pair<int, pair<int, int> >
#define viv vector<vector<int> >
#define vip vector< pair<int, int> >
#define vi vector<int>
#define mii  map<int, int>
#define li list<int>
#define qu queue<int>
#define vd vector<double>
#define set set<int>
#define stack stack<int>
#define fi first
#define se second
#define mem(x, y) memset(x, y, sizeof(x))
#define pq priority_queue<int>
#define ps(x,y) fixed<<setprecision(y)<<x
using namespace std;
int z= 1000000007;
//int z= 998244353;
int gcd(int a, int b){
    if(a==0)return b;
    if(b==0)return a;
    return gcd(b, a%b);
}
int power(int a,int b)
{
	int res=1;
	while(b)
	{
		if(b&1)
		{
			res=(res*a)%z;
			b--;
		}
		else
		{
			a=(a*a)%z;
			b=b>>1;
		}
	}
	return res;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
	
	// Write Your code here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	}
}