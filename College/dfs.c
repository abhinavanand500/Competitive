#include<stdio.h>
#include<stdlib.h>
void dfs(int);
int a[20][20],visit[20],n;
int main()
{
	int i,j,v;
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	printf("Enter the matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		visit[i]=0;
	}
	printf("Enter the starting vertex\n");
	scanf("%d",&v);
	dfs(v);
	return 0;
}
void dfs(int v)
{
	int i;
	visit[v]=1;
	printf("%d",v);
	for(i=1;i<=n;i++)
	{
		if(a[v][i]==1&&visit[i]==0)
		{
			dfs(i);
		}
	}
}
