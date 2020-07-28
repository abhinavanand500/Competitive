#include<iostream>
using namespace std;
#define N 5
int stack[N];
static int coun=0;
void push();
void pop();
void peek();
void display();


struct node{
    int data;
    struct node *next;
};
struct node *newnode, *head, *temp, *top=0;

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
        newnode = (struct node*)malloc(sizeof(node));
        cin>>newnode->data;
        newnode->next=top;
        top=newnode;   
}

void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        cout<<"Stack is Empty.\n";
    }
    else
    {
        cout<<"The Stack contains ::  ";
        while(temp!=0)
        {
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
    }    
}

void peek()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        cout<<"Stack is Empty.\n";
    }
    else
    {
        cout<<"The  element in top is ::  "<<temp->data;
    }
}

void pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        cout<<"Stack is Empty.\n";
    }
    else
    {
        cout<<"The element which is popped is :: "<<temp->data;
        top=top->next;
        free(temp);
    }
    

}
