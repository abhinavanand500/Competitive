#include<stdio.h>
#include<stdlib.h>
void bfs(int);
int a[20][20],visited[20],q[20],n,i,j,r=-1,f=0;
int main()
{
	int v;
	printf("Enter the no. of nodes\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		q[i]=0;
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
	bfs(v);
	for(i=1;i<=n;i++)
	{
		if(visited[i]!=0)
		{
			printf("\n%d canbe visited\n",i);
		}
	}
	return 0;
}
void bfs(int v)
{
	for(i=1;i<=n;i++)
	{
		if(a[v][i]==1&&visited[i]==0)
		{
			q[++r]=i;
		}
	}
	if(f<=r)
	{
		printf("%d",v);
		visited[v]=1;
		bfs(q[f++]);
	}
}
