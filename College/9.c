#include<stdio.h>
#include<stdlib.h>
#define max 4
void enq();
void deq();
void display();
int q[max],r=-1,f=-1;
int main()
{
	int ch;
	while(1)
	{
		printf("1-enq\n2-deq\n3-display\n4-exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enq();
				break;
			case 2:deq();
				break;
			case 3:display();
				break;
			case 4: exit(0);
				break;
			default:break;
		}
	}
	return 0;
}
void enq()
{
	int num;
	if((f==0&&r==max-1)||(f>0&&r==f-1))
	{
		printf("The queue is full\n");
	}
	else
	{
		printf("Enter the number to enq\n");
		scanf("%d",&num);
		if(r==-1&&f==-1)
		{
			r=0;
			f=0;
			q[r]=num;
		}
		else if(r==max-1&&f>0)
		{
			r=0;
			q[r]=num;
		}
		else if(r!=f-1)
		{
			r++;
			q[r]=num;
		}
	}
}

void deq()
{
	int num;
	if(f==-1&&r==-1)
	{
		printf("The queue is empty\n");
		printf("f isss %d\n",f);
	}
	else
	{

		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else if(f==max-1)
		{
			f=0;
		}	
		else
		{	
			f++;
			printf("f is %d ",f);
		}
	}
	
}
void display()
{
	int i,j;
	if(f>r)
	{
		for(i=0;i<=r;i++)
		{
			printf("%d\n",q[i]);
		}
		for(j=f;j<max;j++)
		{
			printf("%d\n",q[j]);
		}
	}
	else
	{
		for(i=f;i<=r;i++)
		{
			printf("%d\n",q[i]);
		}
	}
}





























