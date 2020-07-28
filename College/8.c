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
			case 4:exit(0);
				break;
			default:break;
		}
	}
	return 0;
}
void enq()
{
	int num;
	if(r>=max-1)
	{
		printf("Queue is full\n");
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
		else
		{
			r++;
			q[r]=num;
		}
	}
}
void deq()
{
	int num;
	if(f<0)
	{
		printf("The queue is empty\n");
	}
	else
	{
		if(f==r)
		{
			num=q[f];
			printf("The deleted element is %d",num);
			f=-1;
		}
		else
		{
		num=q[f];
		f++;
		printf("The deleted element is %d\n",num);
		}
	}


}
void display()
{
	int i;
	for(i=f;i<=r;i++)
	{
		printf("%d",q[i]);
	}
}
