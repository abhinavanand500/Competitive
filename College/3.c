#include<stdio.h>
void hanoi(int,char,char,char);
int main()
{
	int n;
	printf("Enter the no. of disks\n");
	scanf("%d",&n);
	printf("sequences involved to solve the problem are\n");
	hanoi(n,'A','C','B');
	return 0;
}
void hanoi(int n,char src,char dest,char aux)
{
	if(n==1)
	{
		printf("Move disk 1 from peg %c to %c\n",src,dest);
		return;
	}
	hanoi(n-1,src,aux,dest);
	printf("Move disk %d from %c to %c \n",n,src,dest);
	hanoi(n-1,aux,dest,src);
}
