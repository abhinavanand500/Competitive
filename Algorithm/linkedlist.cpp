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
struct node *head=0,*nxt,*curr,*temp,*prev,*newnode;

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
                                        printf("n Wrong Choice:n");
                                        break;
                }
        }
        return 0;
}

void create()
{
    newnode=(struct node*)malloc(sizeof(node));
    cout<<"Enter the element for new LinkedList :: ";
    cin>>newnode->data;
    if(head==0)
    {
        head=newnode;
        newnode->next=0;
    }
    else
    {
        cout<<"Your Linked list is already created. Try to enter element.\n";
    }
}
void display()
{
    curr=head;
    while(curr!=0)
    {
        cout<<curr->data<<" -> ";
        curr=curr->next;
    }
    cout<<"END";
}
void insert_begin()
{
    newnode=(struct node*)malloc(sizeof(node));
    cout<<"Enter the element to insert in beggining :: ";
    cin>>newnode->data;
    newnode->next=head;
    head=newnode;
}
void insert_end()
{
    newnode=(struct node*)malloc(sizeof(node));
    cout<<"Enter the element to insert at last :: ";
    cin>>newnode->data;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=0;
}

void insert_pos()
{
    int n,current=1;
    temp=head;
    cout<<"Enter the position of element :: ";
    cin>>n;
    newnode=(struct node*)malloc(sizeof(node));
    cout<<"Enter the element to insert at "<<n<<" position :: ";
    cin>>newnode->data;
    while(current!=n-1)
    {
        temp=temp->next;
        current+=1;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
