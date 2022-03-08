#include <iostream>
using namespace std;
//linkedlist
//as we know class is a user defined data type
class node
{   public:

    int data;//value part of the node
    node* next;//address part that store the address of the next node
    node(int val)//constructor of the classs node to initialise the object of the class ie;node
    {
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}   
void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }   
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" - ";
        temp=temp->next;
    }
    cout<<endl;

}

bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
} 
void deleteAtHead(node* &head)
{
    node* to_delete=head;
    head=head->next;
    delete to_delete;//to avoid memory leak
}  
void deletion(node* &head,int valTOdelete)
{   
    if(head==NULL)//if ll is empty
    {
        return;
    }
    //if only one element in LL
    if(head->next==NULL)
    {
        deleteAtHead(head);
        return ;
    }
    node* temp=head;
    while(temp->next->data != valTOdelete)
    {
        temp=temp->next;
    }
    node* to_delete=temp->next;
    temp->next=temp->next->next;
    delete to_delete;
}    
int main() 
{
    node* head=NULL;//head is the object of the class
    insertAtTail(head,2);
    insertAtTail(head,1);
    insertAtTail(head,3);
    insertAtTail(head,5);
    insertAtTail(head,8);
    insertAtHead(head,77);
    display(head);
    cout<<search(head,0);
    cout<<endl;
    cout<<search(head,2)<<endl;
    deletion(head,3);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}
