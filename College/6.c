#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 100
void push(int);
int pop();
int top=-1,post[max];
char postfix[max];
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
int main()
{
	char ch;
	int i=0,k=0,op1,op2;
	printf("Enter the postfix expression\n");
	scanf("%s",postfix);
	while((ch=postfix[i++])!='\0')
	{
		if(isdigit(ch))
		{
			push(ch-'0');
		}
		else
		{
			op2=pop();
			op1=pop();
			switch(ch)
			{
				case '+':push(op1+op2);
					break;
				case '-':push(op1-op2);
					break;
				case '*':push(op1*op2);
					break;
				case '/':push(op1/op2);
			}
		}
	}
	printf("Result is %d",post[top]);
}
