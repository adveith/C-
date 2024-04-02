#include<iostream>
using namespace std;
struct pizza
{
    int data;
    struct pizza*next;
};
struct pizza*front=NULL;
struct pizza*rear=NULL;
void add_pizza()
{
    int val;
    struct pizza*ptr=new struct pizza;
    if(ptr==NULL)
    {
        cout<<"No Pizza selected"<<endl;
    }
    else
    {
        cout<<"Enter which pizza do you want to purchase"<<endl;
        cout<<"1 - Chicken chesse pizza"<<endl;
        cout<<"2 - Panner chesse pizza"<<endl;
        cin>>val;
        ptr->data=val;
        if(front==NULL)
        {
            ptr->next=NULL;
            front=rear=ptr;
        }
        else
        {
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }
        cout<<val<<" is in your cart , Your choise is excellent"<<endl;
    }
}
void remove_pizza()
{
    int val;
    struct pizza*ptr;
    if(front==NULL)
    {
        cout<<"Opps no pizza is selected"<<endl;
    }
    else
    {
        val=front->data;
        ptr=front;
        front=front->next;
        free(ptr);
        cout<<val<<" is removed from your cart"<<endl;
    }
}
void display()
{
    struct pizza*temp=front;
    while(temp!=NULL)
    {
        cout<<"-> No 1 is Chicken cheese pizza & No 2 is Panner cheese pizza"<<endl;
        cout<<"Your Order is ->"<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    int choice;
    do
    {
    
        cout<<"Hello , welcome to Adarsh pizza center , hope you are doing good."<<endl;
        cout<<"Enter 1 to add pizza in your cart"<<endl;
        cout<<"Enter 2 to remove pizza from your cart"<<endl;
        cout<<"Enter 3 to show the elements in your cart"<<endl;
        cout<<"Enter 4 to exit our store"<<endl;
        cin>>choice;
    switch(choice)
        {
            case 1:
            add_pizza();
            break;

            case 2:
            remove_pizza();
            break;

        case 3:
        display();
        break;

        case 4:
        cout<<"Thankyou for visiting Adarsh Pizza Center"<<endl;
    }
    }while(choice!=4);
}