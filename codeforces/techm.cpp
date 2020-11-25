#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arr[0];
    int sum=0;
    for(i=1;i<n;i++)
    {
        sum=sum+0.1*(arr[i]-ans);
    }
    cout<<sum<<endl;
}