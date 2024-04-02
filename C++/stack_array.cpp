#include<iostream>
using namespace std;
int stack[100];
int n;
int top=-1;
void create(){
    cout<<"enter the size of stack :";
    cin>>n;

}
void push(){
    int val;
    
    if(top<n){
        cout<<"enter the value :";
        cin>>val;
        top++;
        stack[top]=val;
        cout<<val<<" is pushed into stack"<<endl;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
    
}
void pop(){
    int val;
    if (top==-1) {
        cout << "stack underflow"<<endl;
    }
    else{
        val=stack[top];
        top--;
        cout<<val<<" is poped from stack"<<endl;
    }
}
void display(){
    int i;
    cout<<"\n\n";
    for(i=top;i>=0;i--){
        cout<<"|"<<stack[i]<<"|"<<endl;

        cout<<"+-+"<<endl;
    }
    cout<<endl;
}


int main(){
    int choice;
    do
    {
    cout<<"1. press 1 for create"<<endl;
    cout<<"2. press 2 for push"<<endl;
    cout<<"3. press 3 for pop"<<endl;
    cout<<"4. press 4 for display"<<endl;
    cout<<"5.. press 5 for exit"<<endl;
    cout<<"enter your choice : "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        create();
            break;

        case 2:
            push();
            break;

        case 3:
        pop();
            break;

        case 4:
            display();
            break;
        case 5:
            cout<<"thank you"<<endl;
            break;
        default:
        cout<<"wrong choice "<<endl;
    }
    }while(choice!=5);

}