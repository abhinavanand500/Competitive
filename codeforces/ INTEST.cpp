#include<iostream>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,k,num,count=0;
    cin>>n>>k;
    while(n--){
        cin>>num;
        if(num%k==0){
            count++;
        }
    }
    cout<<count;
}
