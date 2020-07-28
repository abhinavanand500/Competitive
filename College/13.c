#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct bst
{
	int data;
	struct bst *l,*r;
};
typedef struct bst node;
node *newnode,*head=NULL,*root=NULL;
node* createnode(int);
void inorder(node*);
void preorder(node*);
void postorder(node*);
node* createnode(int num)
{
	newnode=(node*)malloc(sizeof(node));
	newnode->data=num;
	newnode->l=NULL;
	newnode->r=NULL;

	return newnode;
}
int main()
{
	root=createnode(1);
	root->l=createnode(2);
	root->r=createnode(3);
	root->l->l=createnode(4);
	root->l->r=createnode(5);
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
	postorder(root);
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
void preorder(node* rootnode)
{
	if(rootnode!=NULL)
	{
		printf("%d->",rootnode->data);
		preorder(rootnode->l);
		postorder(rootnode->r);
	}
}
void postorder(node* rootnode)
{
	if(rootnode!=NULL)
	{
		postorder(rootnode->l);
		postorder(rootnode->r);
		printf("%d->",rootnode->data);
	}
}
















