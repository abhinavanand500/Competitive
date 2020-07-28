#include<stdio.h>
#include<stdlib.h>
// #include<malloc.h>
struct bst
{
	int data;
	struct bst *r;
	struct bst *l;
};
typedef struct bst node;
void inorder(node*);
node* insert(node*,int);
node* create(int);
node *newnode,*root=NULL;
int main()
{
	int nod,i,n;
	printf("Enter the number of nodes\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d node \n",i+1);
		scanf("%d",&nod);
		if(root==NULL)
		{
			root=create(nod);
		}
		else
		insert(root,nod);
	}
	inorder(root);
	return 0;
}
node* insert(node *roo,int data)
{
	if(roo==NULL)return create(data);
	else if(data>roo->data)
	
		roo->r=insert(roo->r,data);
		
	
	else
	
		roo->l=insert(roo->l,data);
	
	return roo;
		
	
	
}	
node* create(int value)
{
	newnode=(node*)malloc(sizeof(node));
	newnode->data=value;
	newnode->r=NULL;
	newnode->l=NULL;
	return newnode;
}
void inorder(node* roo)
{	
	if(roo!=NULL)
	{
	inorder(roo->l);
	printf("%d->",roo->data);
	inorder(roo->r);
	}
}


































