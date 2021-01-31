#include <iostream>
using namespace std;
int main()
{
    int n, i, j, temp;
    cout << "Enter the size of array :: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements :: \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The sorted array is :: ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}




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
    reverse(a, a + n); 
    cout<<endl;
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