//in dp prefix suffix sum helps..
//array of size 3e7+1 is possible if defined globally..
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
#define pb   push_back
#define mp   make_pair
#define pii  pair<int,int>
#define pip pair<int, pair<int, int> >
#define viv vector<vector<int> >
#define vip vector<pair<int , int> >
#define vi vector<int>
#define mii  map<int, int>
#define li list<int>
#define qu queue<int>
#define set set<int>
#define vd vector<double>
#define stack stack<int>
#define fi first
#define se second
#define mem(x, y) memset(x, y, sizeof(x))
#define pq priority_queue<int>
#define pq1 priority_queue <int, vector<int>, greater<int> >
#define ps(x,y) fixed<<setprecision(y)<<x
// author :: Anurag Anand.
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
			res=(res*a);
			b--;
		}
		else
		{
			a=(a*a);
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
	int t;
	t=1;
	while(t--){
		int n;
		cin>>n;
		int ar[n+1][n+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) cin>>ar[i][j];
		}
		for(int i=0;i<=n;i++){
			ar[i][0]=0;
			ar[0][i]=0;
		}
		int k;
		cin>>k;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) ar[i][j]+=ar[i][j-1];
		}
		int ans=0;
		for(int j=k;j<=n;j++){
			vi v;
			v.pb(0);
			for(int i=1;i<=n;i++) v.pb(ar[i][j]-ar[i][j-k]);
			for(int i=1;i<=n;i++) v[i]+=v[i-1];
			for(int i=k;i<=n;i++) ans= max(ans, v[i]-v[i-k]);
		}
		cout<<ans<<"\n";
	}
}