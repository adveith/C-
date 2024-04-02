#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
struct node *tail=NULL;

void insert_begin(){
    int val;
    struct node *ptr;
    ptr=new struct node;
    if(ptr==NULL)
    {
        cout<<"overflow"<<endl;
    }
    else{
        cout<<"enter data : ";
        cin>>val;
        ptr->data=val;
        if(head==NULL){
            head=ptr;
            tail=ptr;
            head->prev=tail;
            tail->next=head;
        }
        else{
            ptr->next=head;
            head->prev=ptr;
            head=ptr;
            head->prev=NULL;
        }
    }
}
void insert_end(){
    int val;
    struct node *ptr;
    ptr=new struct node;
    if(ptr==NULL){
        cout<<"overflow"<<endl;
    }
    else{
        cout<<"enter data : ";
        cin>>val;
        ptr->data=val;
        if(head==NULL){
            head=ptr;
            tail=ptr;
            head->prev=tail;
            tail->next=head;
        }
        else{
            tail->next=ptr;
            ptr->prev=tail;
            tail=ptr;
            tail->next=NULL;
        }
    }
}

void insert_middle(){
    int val,pos;
    struct node *ptr;
    ptr=new struct node;
    if(ptr==NULL){
        cout<<"overflow"<<endl;
    }
    else{
        cout<<"enter data : ";
        cin>>val;
        cout<<"enter the position : ";
        cin>>pos;
        ptr->data=val;
        struct node *temp=head;
        for(int i=1;i<pos-1;i++)
            {
            if(temp==NULL){
                cout<<"invalid position"<<endl;
                                break;
            }
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next->prev=ptr;
        ptr->prev=temp;
        temp->next=ptr;
    }
}


void delete_begin(){
    int val;
    struct node *ptr=new struct node;
    if(head==NULL){
        cout<<"cant delete"<<endl;
    }
    else{
        if(head==tail){
            ptr=head;
            val=ptr->data;

            head=NULL;
            tail=NULL;
            free(ptr);
            cout<<val<<" is deleted"<<endl;
        }
        else{
            ptr=head;
            val=ptr->data;
            head=head->next;
            head->prev=tail;
            free(ptr);
            cout<<val<<" is deleted "<<endl;
        }
    }
    
}

void delete_end(){
    int val;
    struct node *ptr=new struct node;
    if(head==NULL){
        cout<<"cant delete"<<endl;
    }
    else{
        if(head==tail){
            ptr=head;
            val=ptr->data;

            head=NULL;
            tail=NULL;
            free(ptr);
            cout<<val<<" is deleted"<<endl;
        }
        else{
            struct node *temp;
            temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            ptr=tail;
            tail->next=head;
            val=ptr->data;
            free(ptr);
            cout<<val<<" is deleted"<<endl;
        }
    }
}


void delete_middle(){
    int val,pos;
    struct node *ptr=new struct node;
    if(head==NULL){
        cout<<"cant delete"<<endl;
    }
    else{
        cout<<"enter the position of element to delete "<<endl;
        cin>>pos;
        struct node *temp;
        temp=head;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        if(temp!=NULL){
            ptr=temp->next;
            val=ptr->data;
            temp->next=ptr->next;
            ptr->next->prev=temp;
            temp->next=NULL;    
            val=ptr->data;
            free(ptr);
            cout<<val<<" is  deleted"<<endl;
                
    }
    else{
            cout<<"cant delete"<<endl;
        }
    }
    }


void display(){
    struct node *temp;
    temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->prev;

    }
}


int  main(){
    int choice;
        do{
    cout<<"1. press 1 for insert begin"<<endl;
    cout<<"2. press 2 for insert end"<<endl;
        cout<<"3. press 3 for insert middle"<<endl;
        cout<<"4. press 4 for delete begin"<<endl;
        cout<<"5. press 5 for delete end"<<endl;
        cout<<"6. press 6 for delete middle"<<endl;
        cout<<"7. press 7 for display"<<endl;
        cout<<"8. press 8 for exit"<<endl;
        cout<<"enter your choice :- ";
        cin>>choice;
    
            switch(choice){
                case 1:
                
                    insert_begin();
                    break;
                case 2:
                    insert_end();
                    break;
                case 3:
                    insert_middle();
                    break;
                case 4:
                    delete_begin();
                    break;
                case 5:
                    delete_end();
                    break;
                case 6:
                    delete_middle();
                    break;
                case 7:
                    display();
                    break;
                case 8:
                    exit(0);
                    break; 
                default:
                    cout<<"wrong choice"<<endl;
                    break;

            }
        }
        while(choice !=9);
}       