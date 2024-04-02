#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;    
};
struct Node *front=NULL;
struct Node *rear=NULL;

void enqueue(){
    int val;
    struct Node *ptr=new struct Node;

    if(ptr==NULL){
        cout<<"overflow"<<endl;
    }
    else{
        cout<<"enter the data :";
        cin>>val;
        ptr->data=val;
        if(front==NULL){
            ptr->next=NULL;
            front=rear=ptr;

        }else{
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }
        cout<<val<<" is enqueued in the list"<<endl;
    }

}
void dequeue(){
int val;
    struct Node *ptr;
    if(front==NULL){
        cout<<"queue is empty"<<endl;
    }
    else{
        val=front->data;
        ptr=front;
        front=front->next;
        free(ptr);
        cout<<val<<" is dequed from queue"<<endl;
    }
    
}
void display()
{
    struct Node *temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main()
{
    int choice;
    do
    {
    
        cout<<"Enter 1 to enqueue"<<endl;
        cout<<"Enter 2 to dequeue"<<endl;
        cout<<"Enter 3 to display"<<endl;
        cout<<"Enter 4 to exit"<<endl;
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
        display();
        break;

        case 4:
        cout<<"Thankyou"<<endl;
    }
    }while(choice!=4);
}