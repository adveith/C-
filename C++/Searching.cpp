#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node*next
};
struct node*head=NULL;
struct node*tail=NULL;
void search()
{   
    struct node*temp;
    int key,flag=1,count=1;
    cout<<"Enter a key to search in array - ";
    cin>>key;
    while(temp!=NULL)
    {
        if(key==temp->data)
        {
            flag=0;
            break;
        }
        count++;
        temp=temp->next;
    }
    if(flag=0)
    {
        cout<<"is present at position "<<count<<endl;
    }
    else
    {
        cout<<"is not present"<<endl;
    }
}
int main()
{
int choice;
int arr[]={0,5,2,6,3,6,4};
cout<<"Enter 1 for search in the array"<<endl;
cout<<"Enter 2 to exit"<<endl;
cin>>choice;
do
{
    switch(choice)
    {
        case 1:
            search();
            break;
        case 2:
            exit(0);
            break;
            default:
            cout<<"wrong choice"<<endl;
            break;
    }
}
    while(choice =!2);
}