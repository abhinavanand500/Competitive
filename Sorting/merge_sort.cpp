#include<iostream>
using namespace std;

int merge(int a[],int l,int m,int h){
    int i,j,k,c[20];
    i=l;
    j=m+1;
    k=l;
    while(i<=m && j<=h){
        if(a[i]<=a[j]){
            c[k]=a[i];
            i+=1;
            k+=1;
        }
        else{
            c[k]=a[j];
            j+=1;
            k++;
        }
    }
    while(i<=m){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<=h){
        c[k]=a[j];
        j++;
        k++;
    }
    for(i=l;i<=h;i++){
        a[i]=c[i];
    }
}

int msort(int a[], int low, int high){
    int m;
    if(low<high){
        m= (low+high)/2;
        msort(a,low,m);
        msort(a,m+1,high);
        merge(a,low,m,high);
    }
}

int main(){
    int n,i,j,temp;
    cout<<"Enter the size of array :: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements :: \n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    msort(a,0,n-1);
    cout<<"The sorted array is :: ";
    for(i=0;i<n;i++){
    cout<<a[i]<<" ";
    }

}