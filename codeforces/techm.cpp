#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>input1;
    for(i=0;i<input1;i++){
        cin>>input2[i];
    }
    int ans=input2[0];
    int sum=0;
    for(i=1;i<input1;i++)
    {
        sum=sum+0.1*(input2[i]-ans);
    }
    cout<<sum<<endl;
}