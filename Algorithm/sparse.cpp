#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of matrix :: ";
    cin>>n;
    int arr[n][n],count=0;
    cout<<"Enter the matrix :: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==0)
            {
                count+=1;
            }
        }
    }
    if(count>=(n*n)/2)
    {
        cout<<"It is Sparse Matrix.\n";
    }
    else
    {
        cout<<"It is not Sparse Matrix.\n";
    }
}