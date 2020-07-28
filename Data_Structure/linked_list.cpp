#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node * next;
};
int main()
{
    struct node *head, *newnode, *curr;
    int n;
    head=0;
    cout<<"ENter the size of linked list :: ";
    cin>>n;
    while(n--)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        cout<<"Enter the element :: ";
        cin>>newnode->data;
        newnode->next=0;
        if(head==0)
        {
            head = newnode;
            curr = newnode;
        }
        else
        {
            curr->next=newnode;
            curr=newnode;
        }
    }
    cout<<"Printing data :: \n";
    curr=head;
    while(curr!=0)
    {
        cout<<curr->data<<"  ";
        curr=curr->next;
    }
}