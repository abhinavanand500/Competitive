#include<stdio.h>
#include<stdlib.h>
int acker(int,int);
int main()
{
	int m,n;
	printf("Enter m and n\n");
	scanf("%d%d",&m,&n);
	printf("The result is %d\n",acker(m,n));
	return 0;
}
int acker(int m,int n)
{
	if(m==0)
	return n+1;
	else if(n==0)
	return acker(m-1,1);
	else
	return acker(m-1,acker(m,n-1));
}
