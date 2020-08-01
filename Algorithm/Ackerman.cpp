#include<iostream>
using namespace std;

int ack(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if(m>0 && n==0)
    {
        return ack(m-1,1);
    }
    else
    {
        return ack(m-1,ack(m,n-1));
    }
}


int main()
{
    int m,n;
    cout<<"Enter the value of m and n :: ";
    cin>>m>>n;
    cout<<"Answer is :: "<<ack(m,n)<<"\n";
}