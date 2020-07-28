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
struct node
{
    int data;
    struct node *next;
};
struct node *head=0, *temp, *newnode;
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
                                        printf("n Wrong Choice:n");
                                        break;
                }
        }
        return 0;
}
void create()
{
    cout<<"Enter the number to Enter :: ";
    newnode = (struct node*)malloc(sizeof(node));
    cin>>newnode->data;
    if(head==0)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
        cout<<"Your linked list is already created. Try insert or delete operation.\n";
    }   
}
void insert_end()
{
    cout<<"Enter the number to Enter :: ";
    newnode = (struct node*)malloc(sizeof(node));
    cin>>newnode->data;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insert_begin()
{
    cout<<"Enter the number to Enter :: ";
    newnode = (struct node*)malloc(sizeof(node));
    cin>>newnode->data;
    newnode->next=head;
    head=newnode;
}
void display()
{
        struct node *ptr;
        if(head==NULL)
        {
                cout<<"\nList is empty:\n";
                return;
        }
        else
        {
                ptr=head;
                cout<<"\nThe List elements are:: \t";
                while(ptr!=NULL)
                {
                        cout<<ptr->data<<"  ";
                        ptr=ptr->next ;
                }
                cout<<"\n";
        }
}
void insert_pos()
{
    int n,i=1;
    struct node *curr;
    curr=head;
    cout<<"Enter the position :: \t";
    cin>>n;
    cout<<"Enter the number to Enter :: ";
    newnode = (struct node*)malloc(sizeof(node));
    cin>>newnode->data;   
    while(i<n)
    {
        curr=curr->next;
        i+=1;
    }
    newnode->next=curr->next;
    curr->next=newnode;
}
void delete_begin()
{
    if(head==0)
    {
        cout<<"No data to delete\n";
    }
    else{
        struct node *del;
        del=head;
        head=head->next;
        free(del);
    }
}

void delete_end()
{
    struct node *prev;
    temp=head;
    while(temp->next!=0)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=0;
    free(temp);
}
void delete_pos()
{
    struct node *prev;
    temp=head;
    int n;
    cout<<"Enter the position to delete :: ";
    cin>>n;
    n=n-1;
    while(n--)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    temp->next=0;
    free(temp);
}

void len_ll()
{
    temp=head;
    int count=1;
    while(temp->next!=0)
    {
        temp=temp->next;
        count++;
    }
    cout<<"Length of linked list is :: "<<count;
}
void reversell()
{
    struct node *prevnode, *currnode, *nextnode;
    prevnode=0;
    currnode=head;
    nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        currnode->next=prevnode;
        prevnode=currnode;
        currnode=nextnode;
    }
    head=prevnode;
}