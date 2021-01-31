#include<iostream>
using namespace std;
void solution_function(){
    int n;
    cin>>n;
    int i,j,a[100],temp,p,q,temp1;
    for(i=0;i<n;i++)
    {
        cin>>a[i] ;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++) { if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" " ;
    }
    for(p=0;p<n;p++)
    {
        for(q=p+1;q<n;q++)
        {
            if(a[p]<a[q])
            {
                temp1=a[p];
                a[p]=a[q];
                a[q]=temp1;
            }
        }
    }
    for(p=0;p<n;p++)
    {
        cout<<a[p]<<" " ;
    }
}
int  main()
{
   solution_function();
   return 0; 
}