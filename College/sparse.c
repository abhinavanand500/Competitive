#include<stdio.h>
int main()
{
int a[20][20],b[20][20],i,j,n,m,temp=0,t=1,p=0;
printf("enter the size\n");
scanf("%d%d",&m,&n);
printf("enter the elements\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
		if(a[i][j]!=0)
		{
			temp++;
		}
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
		{
			b[t][p]=i;
			b[t][p+1]=j;
			b[t][p+2]=a[i][j];
			t++;
		}
	}
}
for(i=0;i<temp+1;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",b[i][j]);
	}
	printf("\n");
}
return 0;
}
