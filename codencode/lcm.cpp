#include<iostream>
using namespace std;
int hcf(int a, int b)
{
    if(a==0){
        return b;
    }
    else{
        return hcf(b%a,a);
    }
}

int lcm(int a,int b)
{
    return a/b;
}
int main()
{

    int m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        int mul=m*n;
        int h=hcf(m,n);
        int ans=lcm(mul,h);
        cout<<ans<<endl;
    }
}