#include<iostream>
using namespace std;
class linkedlist{
    public:
    linkedlist* head= NULL;
    linkedlist* temp=NULL;
    int data;
    linkedlist* next;
    void makelist(int data)
    {
        temp=head;
        linkedlist* Node= new linkedlist();
        Node->data=data;
        Node->next=NULL;
        if(head!=NULL)
        {
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=Node;
            temp=Node;  
        }
        else{
             Node->data=data;
            Node->next=NULL;
            Node->next=NULL;
             head=Node;
        }

    }
    void printlist(){
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data;
                        temp=temp->next;
        }
    }

};
int main()
{
    linkedlist obj;
    obj.makelist(15);
    obj.makelist(35);
    obj.makelist(31);
    obj.printlist();
    return 0;
} 