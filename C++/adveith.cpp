#include<iostream>
using namespace std;
int main()
{
    struct node
    {
        int data;
        struct node*next;
    };
    struct node*head=NULL;
    struct node*tail=NULL;
    void insert_begin()
    {
        int val;
        cout<<"Enter one value :"<<endl;
        cin>>val;
        struct node*ptr=new struct node*
        if(ptr==null)
        {
            cout<<"Overflow"<<endl;
        }
        else
        {
            if(head==null)
            {
                head=ptr 
                tail=ptr 
                ptr->next=null
                ptr->data=val 
            }
            
            else
            {
                ptr->data=node
                ptr->next=head
                head=ptr

            }
        }
    }
}
