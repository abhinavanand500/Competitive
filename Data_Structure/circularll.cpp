#include<iostream>
using namespace std;

void create();
void display();
void insert_begin();
// void insert_end();
// void insert_pos();
// void delete_begin();
// void delete_end();
// void delete_pos();
// void len_ll();
// void reversell();



struct node
{
    int data;
    struct node *next;
};
struct node *head=0, *tail, *newnode;

int main()     
{
        int choice;
        while(1){
               
                cout<<"\n                MENU                             \n";
                cout<<" 1.Create     \n";
                cout<<" 2.Display    \n";
                cout<<" 3.Insert at the beginning    \n";
                cout<<" 4.Insert at the end  \n";
                cout<<" 5.Insert at specified position      \n";
                cout<<" 6.Delete from beginning      \n";
                cout<<" 7.Delete from the end        \n";
                cout<<" 8.Delete from specified position     \n";
                cout<<" 9.Check Length of linked list     \n";
                cout<<" 10.Reverse linked list     \n";
                cout<<" 11.Exit       \n";
                cout<<"--------------------------------------\n";
                cout<<"Enter your choice:\t";
                cin>>choice;
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        // case 4:
                        //                 insert_end();
                        //                 break;
                        // case 5:
                        //                 insert_pos();
                        //                 break;
                        // case 6:
                        //                 delete_begin();
                        //                 break;
                        // case 7:
                        //                 delete_end();
                        //                 break;
                        // case 8:
                        //                 delete_pos();
                        //                 break;
                        // case 9:
                        //                 len_ll();
                        //                 break;
                        
                        // case 10:
                        //                 reversell();
                        //                 break;
                        
                        case 11:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
        }
        return 0;
}

void create()
{
    cout<<"Enter the number to enter :: ";
    newnode = (struct node*)malloc(sizeof(struct node));
    cin>>newnode->data;
    if(head==0)
    {
        head=newnode;
        tail=newnode;
        newnode->next=tail;
    }
    else
    {
        cout<<"You have linked list. Try Insert options.\n";
    }
}
void display()
{
    struct node *curr;
    curr=tail->next;
    cout<<"\nThe elements of linked list ::  ";
    if(head==tail)
    {
        cout<<head->data<<"  ";
    }
    else
    {
        do 
        {
            cout<<curr->data<<"   ";
            curr=curr->next;
        }while(curr->next!=tail->next);
    } 
}

void insert_begin()
{
    struct node *curr, *nxt;
    cout<<"Enter the number to insert :: ";
    newnode = (struct node*)malloc(sizeof(struct node));
    cin>>newnode->data;
    newnode->next=head;
    tail->next=newnode;
    head=newnode;
}