#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct bst
{
	int data;
	struct bst *r,*l;
	
};
typedef struct bst node;
node *newnode,*root=NULL;
node* createnode(int);
node* insert(node*,int);
void inorder(node*);
node* minvalue(node*);
node* delete(node*,int);
node* createnode(int num)
{
	newnode=(node*)malloc(sizeof(node));
	newnode->r=NULL;
	newnode->l=NULL;
	newnode->data=num;
	return newnode;
}
node* insert(node* rootnode,int num)
{
	if(rootnode==NULL)
	return createnode(num);
	else 

{	if(num>rootnode->data)
	rootnode->r=insert(rootnode->r,num);
	else
	rootnode->l=insert(rootnode->l,num);}
	
}
int main()
{
	int num,i,n,ch;
	printf("Enter the no. of the nodes \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(root==NULL)
		{
			root=createnode(num);
		}
		else
		{
			insert(root,num);
		}
	}
	inorder(root);
	printf("Enter the number to delete \n");
	scanf("%d",&ch);
	delete(root,ch);
	inorder(root);
	return 0;
	
}
void inorder(node* rootnode)
{
	if(rootnode!=NULL)
	{
		inorder(rootnode->l);
		printf("%d->",rootnode->data);
		inorder(rootnode->r);
	}
}
node* minvalue(node* rootnode)
{
	if(rootnode->l!=NULL)
	{
		rootnode=rootnode->l;
	}
}
node* delete(node* rootnode,int num)
{
	node *temp;
	if(rootnode==NULL)
	return rootnode;
	else if(num>rootnode->data)
	rootnode->r=delete(rootnode->r,num);
	else if(num<rootnode->data)
	rootnode->l=delete(rootnode->l,num);
	else
	{
		if(rootnode->r==NULL&&rootnode->l==NULL)
		{
			rootnode=NULL;
			free(rootnode);
				
		}
		else if(rootnode->r!=NULL&&rootnode->l==NULL)
		{
			temp=rootnode;
			rootnode=rootnode->r;	
		}
		else if(rootnode->r==NULL&&rootnode->l!=NULL)
		{
			temp=rootnode;
			rootnode=rootnode->l;
			free(temp);
		}
		else
		{
			temp=minvalue(rootnode->r);
			rootnode->data=temp->data;
			delete(rootnode->r,temp->data);
		}
	}
	return rootnode;
}





























