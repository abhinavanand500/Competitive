#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
    // ios_base::sync_with_stdio(false);
	// cin.tie(NULL);
    int n,i,sum;
    cin>>n;
    while(n--){
        int num;
        sum=0;
        cin>>num;
        int arr[num];
        for(i=0;i<num;i++){
            cin>>arr[i];
            if(i>0){

                    sum=sum+abs(arr[i]-arr[i-1])-1;    
            }
            }
        }
        cout<<sum<<"\n";
}
// 

