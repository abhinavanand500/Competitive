#include<iostream>
using namespace std;
int main(){
    int n,i,j,temp;
    cout<<"Enter the size of array :: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements :: \n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The sorted array is :: ";
    for(i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }



    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}