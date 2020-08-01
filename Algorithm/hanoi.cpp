#include<iostream>
using namespace std;
void hanoi(int n, char src, char dest, char helper)
{
    if(n==0)
    {
        return;
    }
    hanoi(n-1,src,helper,dest);
    cout<<"Move "<<n<<" disk from "<<src<<" to "<<dest<<endl;
    hanoi(n-1,helper,dest,src);
}


int main()
{
    int n;
    cout<<"Enter the number of Disk :: ";
    cin>>n;
    hanoi(n,'A','C','B');
}