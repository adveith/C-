#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*right;
    struct node*left;
};
struct node*root;
struct node*create()
{
    struct node *temp=new struct node;
    int data;
    int choice;
    {
        cout<<"Enter 1 to exit"<<endl;
        cout<<"Enter 2 to add a new node"<<endl;
        cin>>choice;
        if(choice==1)
        {
            return 0;
        }
        else
        {
            cout<<"Enter the data"<<endl;
            cin>>data;
            cout<<"Enter the left child of - "<<data<<endl;
            temp->left=create();
            cout<<"Enter the right child of - "<<data<<endl;
            temp->right=create();
            return temp;
        }
    }
};