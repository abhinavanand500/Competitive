#include<iostream>
using namespace std;

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void len_ll();
void reversell();


struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head, *newnode;

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
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        case 9:
                                        len_ll();
                                        break;
                        
                        case 10:
                                        reversell();
                                        break;
                        
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
    head=0;
    cout<<"Enter the number :: ";
    newnode = (struct node*)malloc(sizeof(struct node));
    cin>>newnode->data;
    if(head==0)
    {
        head=newnode;
        newnode->prev=0;
        newnode->next=0;
    }
    else
    {
        cout<<"Element is already created. Try using insertion.\n";
    }
    
}

void display()
{
    struct node *disp;
    disp=head;
    cout<<"The elements in doubly linked list are :: \t";
    while(disp!=0)
    {
        cout<<disp->data<<"  ";
        disp=disp->next;
    }
}

void insert_begin()
{
    struct node *curr;
    curr=head;
    cout<<"Enter the element :: ";
    newnode = (struct node*)malloc(sizeof(struct node));
    cin>>newnode->data;
    newnode->next=head;
    curr->prev=newnode;
    newnode->prev=0;
    head=newnode;
}

void insert_end()
{
    struct node *temp;
    cout<<"Enter the element :: ";
    newnode=(struct node*)malloc(sizeof(node));
    cin>>newnode->data;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    newnode->prev=temp;
    temp->next=newnode;
    newnode->next=0;
}
void insert_pos()
{
    struct node *temp,*nxt;
    temp=0;
    nxt=head;
    int n,i=1;
    cout<<"Enter the position to insert :: ";
    cin>>n;
    cout<<"Enter the element :: ";
    newnode=(struct node*)malloc(sizeof(struct node));
    cin>>newnode->data;
    while(i<n)
    {
        i++;
        temp=nxt;
        nxt=nxt->next;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    nxt->prev=newnode;
}
void delete_begin()
{
    struct node *temp,*nxt;
    temp=head->next;
    nxt=head;
    temp->prev=0;
    head=temp;
    free(nxt);
}
void delete_end()
{
    struct node *nextnode, *prevnode, *currnode;
    prevnode=0;
    currnode=head;
    while(currnode->next!=0)
    {
        prevnode=currnode;
        currnode=currnode->next;
    }
    prevnode->next=0;
    free(currnode);
}
void delete_pos()
{
    struct node *nextnode, *prevnode, *currnode;
    int i=1,n;
    prevnode=0;
    currnode=head;
    cout<<"Enter the position you want to delete :: ";
    cin>>n;
    while(i<n)
    {
        i++;
        prevnode=currnode;
        currnode=currnode->next;
    }
    nextnode=currnode->next;
    nextnode->prev=currnode->prev;
    prevnode->next=currnode->next;
    free(currnode);
}
void len_ll()
{
    struct node *current;
    current=head;
    int i=0;
    while(current!=0)
    {
        i++;
        current=current->next;
    }
    cout<<"The length of your linked list is :: "<<i<<"\n";
}

void reversell()
{
    struct node *nextnode, *prevnode, *currnode, *tail,*curr;
    tail=head;

    while(tail->next!=0)
    {
        tail=tail->next;
    }
    currnode=head;
    while(currnode!=0)
    {  
        nextnode=currnode->next;
        currnode->next=currnode->prev;
        currnode->prev=nextnode;
        currnode=nextnode;
    }
    curr=head;
    head=tail;
    tail=curr;
}