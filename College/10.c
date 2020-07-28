#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct slink
{
	int data;
	struct slink *nxt;
};
typedef struct slink node;
void addlast();
void display();
void addfront();
void addpos();
void deletelast();
void deletefront();
void deletepos();
void reverse();
node *newnode,*head=NULL,*prev;
int main()
{
	while(1)
	{
		int ch;
		printf("\n1-addlast\n2-display\n3-exit\n4-addfront\n5-addpos\n6-deletelast\n7-deletefront\n8-deletepos\n9-reverse\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:addlast();
				break;
			case 2:display();
				break;
			case 3:exit(0);
				break;
			case 4:addfront();
				break;
			case 5:addpos();
				break;
			case 6:deletelast();
				break;
			case 7:deletefront();
				break;
			case 8:deletepos();
				break;
			case 9:reverse();
				break;
			default:break;
		}
	}
	return 0;
}
void addlast()
{
	int n,i;
	printf("Enter the no. of nodes\n");
	scanf("%d",&n);
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
void display()
{
	node *t=head;
	while(t!=NULL)
	{
		printf("%d\t",t->data);
		t=t->nxt;
	}
}
void addfront()
{
	int n,i;
	printf("Enter the no of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(node*)malloc(sizeof(node));
		scanf("%d",&newnode->data);
		if(head==NULL)
		{
			printf("The list is empty\n");
		}
		else
		{
			newnode->nxt=head;
			head=newnode;
		}
	}
}
void addpos()
{
	int ch;
	node *t=head;
	printf("Enter the position \n");
	scanf("%d",&ch);
	printf("Enter the number to enter\n");
	newnode=(node*)malloc(sizeof(node));
	scanf("%d",&newnode->data);
	newnode->nxt=NULL;
	while(t!=NULL)
	{
		if(t->data==ch)
		{
			newnode->nxt=t->nxt;
			t->nxt=newnode;
			break;
			
		}
		t=t->nxt;
	}
}
void deletelast()
{
	node *cur;
	cur=head;
	while(cur->nxt!=NULL)
	{
		prev=cur;
		cur=cur->nxt;
	}
	prev->nxt=NULL;
	free(cur);
}
void deletefront()
{
	node *t=head;
	head=t->nxt;
	free(t);
}
void deletepos()
{
	int ch;
	node *cur=head;
	prev=NULL;
	printf("Enter the number to delete\n");
	scanf("%d",&ch);
	while(cur!=NULL)
	{
		if(ch==cur->data)
		{
			prev->nxt=cur->nxt;
			free(cur);
			break;
		}
		prev=cur;
		cur=cur->nxt;
	}
}
void reverse()
{
	node *cur=head,*next=NULL;
	prev=NULL;
	while(cur!=NULL)
	{
		next=cur->nxt;
		cur->nxt=prev;
		prev=cur;
		cur=next;
	}
	head=prev;
}
















