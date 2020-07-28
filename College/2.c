#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[20][20],i,j,m,n,b[20][20],temp=0,t=0,v=0;
	printf("Enter m and n\n");
	scanf("%d%d",&m,&n);
	printf("Enter the sparse matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]!=0)
			temp++;
		}
	}
	b[0][0]=m;
	b[0][1]=n;
	b[0][2]=temp;
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	if(a[i][j]!=0)
	{	t=t+1;
		b[t][v]=i;
		b[t][v+1]=j;
		b[t][v+2]=a[i][j];
	}
	}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<=temp;j++)
		{
			printf("%d ",b[j][i]);
		}
		printf("\n");
	}
}
