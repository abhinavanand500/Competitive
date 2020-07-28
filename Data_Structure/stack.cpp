#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top=-1;
void push();
void pop();
void peek();
void display();

int main()     
{
        int choice;
        while(1){
               
                cout<<"\n                MENU                             \n";
                cout<<" 1.Push     \n";
                cout<<" 2.Pop    \n";
                cout<<" 3.Top    \n";
                cout<<" 4.Display\n";
                cout<<" 5. Exit     \n";    
                cout<<"--------------------------------------\n";
                cout<<"Enter your choice:\t";
                cin>>choice;
                switch(choice)
                {
                        case 1:
                                        push();
                                        break;
                        case 2:
                                        pop();
                                        break;
                        case 3: 
                                        peek();
                                        break;
                        case 4:
                                        display();
                                        break;
          
                        case 5:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
        }
        return 0;
}

void push()
{
        int x;
        cout<<"Enter the data :: ";
        cin>>x;
        if(top==N-1)
        {
                cout<<"Stack Overflow.\n";
        }
        else
        {
                top++;
                stack[top]=x;

        }
}
void pop()
{
        int item;
        if(top==-1)
        {
                cout<<"Stack UnderFlow.\n";
        }
        else
        {
                item=stack[top];
                top--;
        }
        cout<<"The popped item is :: "<<item;
        
}

void peek()
{
        if(top==-1)
        {
                cout<<"Stack is empty.\n";
        }
        else
        {
                cout<<"The top element is :: "<<stack[top];
        }
}
void display()
{
        int i;
        if(top==-1)
        {
                cout<<"Stack is Empty.\n";
        }
        else
        {
                cout<<"The elements in stack is ::  ";
                for(i=top;i>-1;i--)
                {
                        cout<<stack[i]<<"  ";
                }
                cout<<"\n";
        }
        
}