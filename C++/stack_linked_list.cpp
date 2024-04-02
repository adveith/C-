#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;  
};

struct node *top=NULL;

void push(){
    int val;
    struct node *ptr=new struct node;
    if(ptr==NULL){
        cout<<"Memory not allocated";

    }
    else {
        cout<<"enter the value to push :";
        cin>>val;
        ptr->data=val;
        ptr->next=top;
        top=ptr;
        cout<<val<<"is pushed in stack"<<endl;
    }

    
}
void pop(){
    int val;
    if(top==NULL){
        printf("Stack is empty");
    }
    else{
        struct node *ptr=top;
        val=top->data;
        top=top->next;
        free(ptr);
        cout<<val<<"is poped from stack"<<endl;
    }
}
void display()
{
    struct node *temp=top;
    while(temp!= NULL )
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
        cout<<"1 - Enter 1 to pop in stack"<<endl;
        cout<<"2 - Enter 2 to Push into Stack "<< endl ;
        cout<<"3 - Enter 3 to display" << endl;
        cout<<"4 - Enter 4 to exit" << endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        pop();
            break;
        case 2:
        push();
            break;
        case 3:
        display();
            break;
        case 4:
        cout<<"Thankyou"<<endl;
            break;
        default:
        cout<<"Invalid input!"<<endl;
            break;
        }

    } while (choice!=4);
    
}