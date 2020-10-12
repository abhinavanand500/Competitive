#include<iostream>
using namespace std;
int main()
{
    int l,r,x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        x=l;
        if(l*2<=r)
        {
            y=2*l;
        }
        else{
            x=-1;
            y=-1;
        }
        cout<<x<<" "<<y<<endl;
    }
}