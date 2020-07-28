#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *root, *newnode, *root=0;

struct node *create();
// void pop();
// void peek();
// void display();

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
                                        create();
                                        break;
                        // case 2:
                        //                 pop();
                        //                 break;
                        // case 3: 
                        //                 peek();
                        //                 break;
                        // case 4:
                        //                 display();
                                        // break;
          
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

struct node *create()
{
    int x;
    cout<<"Enter root node or -1 for no node :: ";
    newnode=(struct node*)malloc(sizeof(node));
    cin>>x;
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    cout<<"Enter left child of "<<x;
    newnode->prev=create();
    cout<<"Enter right child of "<<x;
    newnode->next=create();
    return newnode;
}