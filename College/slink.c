#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void addlast();
void addfront();
void addposition();
void display();
void delete();
void reverse();
struct slink
{
	int data;
	struct slink *nxt;
};
typedef struct slink node;
node *newnode,*prev,*head=NULL,*t;
int main()
{
	int ch;
	do
	{
	printf("1-addlast\n2-addfront\n3-addposition\n4-display\n5-delete\n6-reverse\n7-exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:addlast();
			break;
		case 2:addfront();
			break;
		case 3:addposition();
			break;
		case 4:display();
			break;
		case 5:delete();
			break;
		case 6:reverse();
			break;
		case 7:exit(0);
			break;
		default:break;
	}
	}while(ch!=7);
	return 0;
}
void display()
{
	t=head;
	while(t!=NULL)
	{
		printf("%d\n",t->data);
		t=t->nxt;
	}
}
void addlast()
{
	int i,n;
	
	printf("No of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		
		newnode=(node*)malloc(sizeof(node));
		scanf("%d",&newnode->data);
		newnode->nxt=NULL;
		if(head==NULL)
		{
			head=newnode;
			prev=newnode;
		}
		else
		{
			prev->nxt=newnode;
			prev=newnode;
		}
	}
	
}
void addfront()
{
	int n,i;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the element\n");
	newnode=(node*)malloc(sizeof(node));
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		printf("element can't be inserted\n");
	}
	else
	{
		newnode->nxt=head;
		head=newnode;
	}
	}
}
void addposition()
{	int i,n;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	
	
	int ch;
	printf("enter the position\n");
	scanf("%d",&ch);
	for(i=0;i<n;i++)
	{
		prev=head;
		while(prev!=NULL)
		{	
			if(prev->data==ch)
			{
				newnode=(node*)malloc(sizeof(node));
				printf("Enter the element\n");
				scanf("%d",&newnode->data);
				newnode->nxt=prev->nxt;
				prev->nxt=newnode;
			}
			prev=prev->nxt;
		
		}
	}
}
void delete()
{
	int ch,flag=0;
	printf("enter the number to delete\n");
	scanf("%d",&ch);
	t=head;
	prev=NULL;
	while(t!=NULL)
	{
		if(t->data==ch)
		{
			if(prev==NULL)
			{
				head=t->nxt;
			}
			else
			{
				prev->nxt=t->nxt;
			}
			flag=1;
			free(t);
			printf("deleted element is %d\n",ch);
			break;		
		}
		prev=t;
		t=t->nxt;
	}
	if(flag==0)
	printf("element not found\n");
}
void reverse()
{
	node *prev=NULL,*current=head,*next=NULL;
	while(current!=NULL)
	{
		next=current->nxt;
		current->nxt=prev;
		prev=current;
		current=next;
	}
	head=prev;
	
	
}







































