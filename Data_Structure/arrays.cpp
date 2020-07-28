#include<iostream>
using namespace std;
int main()
{
    int n,a[50],i,j;
    cout<<"Enter the size of array :: ";
    cin>>n;
    cout<<"Enter the "<<n<<" elements :: \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // Insertion in middle
    int pos,num;
    cout<<"Enter the position where you want to enter number :: ";
    cin>>pos;
    cout<<"Enter the number to enter :: ";
    cin>>num;
    for(i=n-1;i>pos-2;i--)
    {
        a[i+1]=a[i];
    }   
    n+=1;
    a[pos-1]=num;
    cout<<"Number after insertion is ::\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }

    // Deletion of element

    cout<<"Enter index which you want to delete :: ";
    cin>>pos;
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n-=1;
    cout<<"Number after Deletion is ::\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }

}