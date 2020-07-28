#include<stdio.h>
int main()
{
	int a[20][20],b[20][20],i,j,m,n;
	printf("Enter m and n\n");
	scanf("%d%d",&m,&n);
	printf("Enter the elements of array\n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("the given matrix\n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose matrix\n");
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
