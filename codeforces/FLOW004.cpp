#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n,num,l;
    cin>>n;
    while(n--){
        cin>>num;
        int number_of_digits=0,sum,temp;
        temp=num;
        do {
            ++number_of_digits; 
            temp /= 10;
            } while (temp);
        sum = ((num%10)+(num/(number_of_digits)));
        cout<<sum<<endl;


    }

	
}
