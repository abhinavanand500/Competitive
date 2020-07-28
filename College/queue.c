#include<stdio.h>
#define MAX 4
#include<stdlib.h>
int q[MAX],front=-1,rear=-1,data;
void enq();
void deq();
void display();
void enq()
{	

	if(((front=0)&&(rear=MAX-1))||((front>0)&&(rear=(front-1))))
	{
		printf("Queue overflow\n");
	}
	else
	{
		printf("enter the element to be inserted\n");
		scanf("%d",&data);
		if((rear=-1)&&(front==-1))
		{
			front=0;
			rear=0;
			q[rear]=data;
		}
		else if(front>0&&rear==MAX-1)
		{
			rear=0;
			q[rear]=data;
		}
		else if(rear!=(front-1))
		{
			rear++;
			q[rear]=data;
		}
	}
}
void deq()
{	
	
	if(front==-1)
	{
		printf("queue underflow\n");
	}
	else
	{	
		
		printf("deleted element is %d\n",q[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front=MAX-1)
		{
			front=0;
		}
		else
		{
			front++;
		}
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("queue is empty\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",q[i]);
		}
	}
}
int main()
{
	int ch;
	printf("\n1-enq\n2-deq\n3-display\n4-exit\n");
	do
	{
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: enq();
				break;
			case 2: deq();
				break;
			case 3: display();
				break;
			case 4: exit(0);
				break;
			default: printf("INvalid optionb\n");
		}
	}while(ch!=4);
	return 0;
}
