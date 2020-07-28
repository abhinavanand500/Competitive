#include<stdio.h>
// #include<malloc.h>
#include<stdlib.h>
struct link
{
	int data;
	struct link *nxt;
};
typedef struct link node;
void addlink1();
void addlink2();
void display();
void add(node*,node*);
node *head=NULL,*head1=NULL,*head2=NULL,*newnode,*newcarry,*cur;
int main()
{
	int ch;
	do
	{
		printf("1-addlink1\n2-addlink2\n3-add\n4-display\n5-exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:addlink1();
				break;
			case 2:addlink2();
				break;
			case 3:add(head1,head2);
				break;
			case 4:display();
				break;
			case 5:exit(0);
				break;
			default:break;
		}
	}while(ch!=5);
	return 0;
}
void addlink1()
{
	int n,i;
	printf("Enter the size\n");
	scanf("%d",&n);
	printf("Enter the number\n");
	for(i=0;i<n;i++)
	{
		newnode=(node*)malloc(sizeof(node));
		newnode->nxt=NULL;
		scanf("%d",&newnode->data);
		if(head1==NULL)
		{
			head1=newnode;
			
		}
		else
		{
			newnode->nxt=head1;
			head1=newnode;
		}
	}
}
void addlink2()
{
	int n,i;
	printf("Enter the size\n");
	scanf("%d",&n);
	printf("Enter the number\n");
	for(i=0;i<n;i++)
	{
		newnode=(node*)malloc(sizeof(node));
		newnode->nxt=NULL;
		scanf("%d",&newnode->data);
		if(head2==NULL)
		{
			head2=newnode;
			
		}
		else
		{
			newnode->nxt=head2;
			head2=newnode;
		}
	}
}
void display()
{
	node *t=head;
	while(t!=NULL)
	{
		printf("%d",t->data);
		t=t->nxt;
	}
}
void add(node *l1,node *l2)
{
	node *p1,*p2;
	int sum,carry=0,x,y;
	p1=l1;
	p2=l2;
	while(p1||p2)
	{
		if(p1!=NULL)
		x=p1->data;
		else
		x=0;
		if(p2!=NULL)
		y=p2->data;
		else
		y=0;
		sum=x+y+carry;
		newnode=(node*)malloc(sizeof(node));
		newnode->nxt=NULL;
		newnode->data=sum%10;
		carry=sum/10;
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			newnode->nxt=head;
			head=newnode;
		}
		if(p1!=NULL)
		p1=p1->nxt;
		if(p2!=NULL)
		p2=p2->nxt;
	}
	if(carry>0)
	{
		newcarry=(node*)malloc(sizeof(node));
		newcarry->nxt=NULL;
		newcarry->data=carry;
		newcarry->nxt=head;
		head=newcarry;
	}
}













