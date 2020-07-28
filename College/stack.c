#include<stdio.h>

#include<stdlib.h>
#define MAX 5
int top=-1,stack[MAX];
void push();
void pop();
void display();
int main()
{
	int ch;
	do
	{
	printf("\nEnter operation\n");
	printf("\n1-pop\n2-push\n3-display\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: pop();
			break;
		case 2: push();
			break;
		case 3: display();
			break;
		case 4: exit(0);

		default: printf("enter valid option\n");
			
	}
	}while(ch!=5);
}
void push()
{
	int val;
	printf("enter the number to push\n");
	scanf("%d",&val);
	if(top==MAX-1)
	{
		printf("the stack is full\n");
	}
	else
	{
		top=top+1;
		stack[top]=val;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("the stack is empty\n");
	}
	else
	{
		top=top-1;
	}
}
void display()
{
	int i;
	for(i=top;i<=0;i--)
	{
		printf("\t%d\t",stack[i]);
	}
}
