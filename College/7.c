#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define max 100
char in[max],post[max];
int top=-1;
void push(int);
int pop();
int priority(char);
void push(int num)
{
	top=top+1;
	post[top]=num;
}
int pop()
{
	int num;
	num=post[top];
	top=top-1;
	return num;
}
int priority(char ch)
{
	if(ch=='#')
	return 0;
	if(ch=='(')
	return 1;
	if(ch=='+'||ch=='-')
	return 2;
	if(ch=='*'||ch=='/')
	return 3;
}
int main()
{
	char postfix[max],ele,ch;
	int k=0,i=0;
	printf("Enter the infix expr\n");
	scanf("%s",in);
	push('#');
	while((ch=in[i++])!='\0')
	{
		if(ch=='(')
		{
			push(ch);
		}
		else if(isalnum(ch))
		{
			postfix[k++]=ch;
		}
		else if(ch==')')
		{
			while(post[top]!='(')
			{
				postfix[k++]=pop();
			}
			ele=pop();
		}
		else
		{
			if(priority(post[top])>=priority(ch))
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
	while(post[top]!='#')
	{
		postfix[k++]=pop();
	}
	postfix[k]='\0';
	printf("%s",postfix);
}
























