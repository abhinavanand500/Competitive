#include<iostream>
using namespace std;
int main()
{
	int a[10][10],m,n,i,j,sum=0;
  cin>>m>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  for(i=0;i<=0;i++)
  {
    for(j=0;j<n;j++)
    {
      sum=sum+a[i][j];
    }
  }
  for(i=1;i<n-1;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==j)
      {
        sum=sum+a[i][j];
      }
    }
  }
    for(j=0;j<n;j++)
    {
      sum=sum+a[n][j];
    }
	cout<<sum;
}