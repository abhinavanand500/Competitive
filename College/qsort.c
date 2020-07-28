#include<stdio.h>
int part(int A[20],int l,int h);
void qsort(int A[20],int l, int h);
int main()
{
	int A[20],l,h,pi,n,i;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	qsort(A,0,n-1);
	printf("The sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}
void qsort(int A[20],int l,int h)
{
	int j;
	if(l<h)
	{
		j=part(A,l,h);
		qsort(A,l,j-1);
		qsort(A,j+1,h);
	}
}
int part(int A[20],int l,int h)
{
	int i,j,temp,pi;
	pi=A[l];
	i=l;
	j=h+1;
	do
	{
		do
		{
			i++;
		}while(A[i]<=pi&&i<=h);
		do
		{
			j++;
		}while(pi<A[i]);
		if(i<j)
		{
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}while(i<j);
	A[l]=A[j];
	A[j]=pi;
	return j;
}


















