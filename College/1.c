#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[20][20],i,j,m,n,temp=0;
	printf("Enter m and n\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			{
				temp++;
			}
		}
	}
	if(temp>=(m*n)/2)
	{
		printf("it is a sparse matrix\n");
	}
	else
	printf("It is not a sparse matrix\n");
	return 0;
}
