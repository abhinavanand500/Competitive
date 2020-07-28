#include<iostream>
using namespace std;
int main(){
    int i,t,x,y,n,temp,q;
    cin>>t;
    cout<<"\n";
    for(i=0;i<t;i++){
        cin>>x>>y>>n;
        temp=(n-y)/x;
        q = temp*x+y;
        if(temp>n){
            q=q-x;
        }
        cout<<q<<endl;

        
    }
}