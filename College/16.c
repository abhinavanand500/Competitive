#include<stdio.h>
#include<stdlib.h>
void dfs(int);
int a[20][20],visited[20],j,n;
int main()
{
	int i;
	int v,temp=0;
	printf("enter the no of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
	}
	printf("Enter the graph in matrix form\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the starting vertex\n");
	scanf("%d",&v);
	dfs(v);
	for(i=1;i<=n;i++)
	{
		if(visited[i]==1)
		{
			temp++;
		}
	}
	if(temp==n)
	{
		printf("\nThe graph is connected\n");
	}
}
void dfs(int v)
{
	int i;
	visited[v]=1;
	printf("%d",v);
	for(i=1;i<=n;i++)
	{
		if(a[v][i]==1&&visited[i]==0)
		{
			dfs(i);
		}
	}	
}
