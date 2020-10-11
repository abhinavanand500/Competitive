#include<iostream>
using namespace std;
int findPower(int a, int b)
{
    int res=1;
    while(b!=0){
        if(b%2!=0)
        {
            res*=a;
            b--;
        }
        else{
            a=a*a;
            b/=2;
        }
    }
    return res;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=findPower(a,b);
    cout<<ans<<endl;
}