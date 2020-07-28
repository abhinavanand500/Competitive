#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,num,sum,temp;
	cin>>n;
	while(n--){
	    cin>>num;
	    sum=0;
	    while(num!=0){
	        temp=num%10;
	        sum+=temp;
	        num=num/10;
	    }
	    cout<<sum<<endl;
	   
	}
	return 0;
}
