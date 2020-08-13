#include<iostream>
using namespace std;
int partition(int arr[], int l, int h)
{
    int pi,i,temp,j;
    pi=arr[l];
    i=l;
    j=h+1;
    while(i<j)
    {
        do{
            i+=1;
        }while(arr[i]<=pi && i<=h);
        do{
            j-=1;
        }while(pi<arr[j]);
        if(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    arr[l]=arr[j];
    arr[j]=pi;
    return j;
}
void qsort(int arr[], int l,int h)
{
    int pi;
    if(l<h)
    {
        pi=partition(arr,l,h);
        qsort(arr,l,pi);
        qsort(arr,pi+1,h);
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array :: ";
    cin>>n;
    int i,arr[n];
    cout<<"Enter the element of array :: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    qsort(arr,0,n-1);
    cout<<"The sorted array is :: ";
    for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}