#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    int sum=0,i=1;
    cin>>k>>n>>w;
    while(w--){
        sum+=k*i;
        i++;
    }
    if(sum-n<=0){
        cout<<'0'<<endl;
    }
    else{
    cout<<sum-n<<endl;
    }
}