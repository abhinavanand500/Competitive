#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 5
char stack[max];
int top=-1;
void push(char item);
char pop();
int pr(char item);
void push(char item)
{
	if(top==max-1)
	{
		printf("Stack is full");
	}
	else
	{
		top=top+1;
		stack[top]=item;
	}
}
char pop()
{
	char item;
	if(top<0)
	{
		printf("empty");
	}
	else
	{
		item=stack[top];
		top=top-1;
		return item;
	}
}
int pr(char item)
{
	if(item=='#')
	return 0;
	else if(item=='(')
	return 1;
	else if(item=='+'||item=='-')
	return 2;
	else if(item=='*'||item=='/')
	return 3;
}
int main()
{
	char postfix[max],infix[max],ch,ele;
	int i=0,k=0;
	printf("enter the infix expression\n");
	scanf("%s",infix);
	push('#');
	while((ch=infix[i++])!='\0')
	{
		if(ch=='(')
		{	push(ch);}
		else if(isalnum(ch))
		{	postfix[k++]=ch;}
		else if(ch==')')
		{
			
			while(stack[top]!='(')
			{
				postfix[k++]=pop();
			}
			ele=pop();
		}
		else
		{
			if(pr(stack[top])>=pr(ch))
			{
				postfix[k++]=pop();
				push(ch);
			}
			else
			{
				push(ch);
			}
		}
	}
	while(stack[top]!='#')
	{
		postfix[k++]=pop();
	}
	postfix[k]='\0';
	printf("%s\n",postfix);
	return 0;
}
