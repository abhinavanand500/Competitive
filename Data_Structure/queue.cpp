#include<iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void peek();
void display();

int main()     
{
        int choice;
        while(1){
               
                cout<<"\n                MENU                             \n";
                cout<<" 1.Enqueue     \n";
                cout<<" 2.Dequeue    \n";
                cout<<" 3.Seek Elements    \n";
                cout<<" 4.Display\n";
                cout<<" 5. Exit     \n";    
                cout<<"--------------------------------------\n";
                cout<<"Enter your choice:\t";
                cin>>choice;
                switch(choice)
                {
                        case 1:
                                        enqueue();
                                        break;
                        case 2:
                                        dequeue();
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

void enqueue()
{
    int num;
    cout<<"Enter the data to be inserted ::  ";
    cin>>num;
    if(rear==N-1)
    {
        cout<<"Queue Overflow.\n";
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        queue[rear]=num;
    }
    else
    {
        rear=rear+1;
        queue[rear]=num;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Underflow Condition.\n";
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
        cout<<"Your Queue is empty now.\n";
    }
    else
    {
        cout<<"The dequeued item is :: "<<queue[front];
        front++;
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is Empty.\n";
    }
    else
    {
        cout<<"The elements in queue is :: ";
        for(i=front;i<=rear;i++)
        {
            cout<<queue[i]<<"    ";
        }
    }
}

void peek()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Your Queue is Empty.\n";
    }
    else
    {
        cout<<"The element in rear is :: "<<queue[rear]<<"\n";
        cout<<"The element in front is :: "<<queue[front]<<"\n";
    }   
}