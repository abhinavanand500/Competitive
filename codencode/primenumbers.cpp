#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int isPrime[n];
    for(i=0;i<n;i++) isPrime[i]=1;
    isPrime[0] = isPrime[1] = 0;
    for(i=2;i*i<=n;i++){
        if(isPrime[i]==1)
        {
            for(j=i*i;j<=n;j++)
            {
                if(j%i==0) isPrime[j]=0;
            }
        }
    }
    for(i=0;i<=n;i++){
        if(isPrime[i]==1)
        {
            cout<<i<<" ";
        }
    }
}