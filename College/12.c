#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct slink
{
	int data;
	struct slink *nxt;
};
typedef struct slink node;
node *newnode,*head=NULL,*head1=NULL,*head2=NULL,*next,*prev,*newcarry;
void link1();
void link2();
void add(node*,node*);
void display();
int main()
{
	int ch;
	do
	{
		printf("\n1-link1\n2-link2\n3-add\n4-display\n5-exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:link1();
				break;
			case 2:link2();
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
void link1()
{
	int i,n;
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	printf("Enter the node\n");
	for(i=0;i<n;i++)
	{
		newnode=(node*)malloc(sizeof(node));
		scanf("%d",&newnode->data);
		newnode->nxt=NULL;
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
void link2()
{
	int i,n;
	printf("Enter the number of digits\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(node*)malloc(sizeof(node));
		printf("Enter the %d digit\n",i+1);
		scanf("%d",&newnode->data);
		newnode->nxt=NULL;
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
	node *t;
	t=head;
	while(t!=NULL)
	{
		printf("\t%d",t->data);
		t=t->nxt;
	}
}
void add(node* l1,node* l2)
{
	int sum,x,y,carry=0;
	node *p1,*p2;
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
		carry=sum/10;
		newnode=(node*)malloc(sizeof(node));
		newnode->data=sum%10;
		newnode->nxt=NULL;
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
		newcarry->data=carry;
		newcarry->nxt=head;
		head=newcarry;
	}
}






























