#include<iostream>
using namespace std;

int queue[100];
int front=-1;
int rear=-1;
int n;
void create(){
cout<<"enter the size of queue :";
cin>>n;

}

void enqueue(){
    int val;
    
    if(rear<=n){
        cout<<"overflow"<<endl;
    }
    else{
    cout<<"enter the data :";
    cin>>val;
        if(front==-1){
            front=0;
            rear=0;
            queue[rear]=val;
        }
        else{
            rear++;
            queue[rear]=val;
        }
        cout<<val<<"is enqueued in queue"<<endl;
    }      
}

void dequeue(){
    int val;
    if(front==-1){
        cout<<"underflow"<<endl;
    }
    else{
        if(front==rear){
            val=queue[front];
            front=-1;
            rear=-1;
        }
        else{
            val=queue[front];
            front++;

        }
        cout<<val<<" is removed from queue "<< endl ;
    }
}

void display(){
    int i;
    for(i=front;i<=rear;i++){
        cout<<queue[i]<<"<-";
    }
}
int main()
{
    int choice;
    do {
        cout<<"Press 1 to create"<<endl;
        cout<<"Press 2 to enque"<<endl;
        cout<<"Press 3 to deque"<<endl;
        cout<<"Press 4 to display"<<endl;
        cout<<"Press 5 to exit"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1 :
            create();
            break;

            case 2 :
            enqueue();
            break;

            case 3:
            dequeue();
            break;

            case 4:
            display();
            break;

            case 5:
            cout<<"Thankyou";
            break;

            default:
            break;
        }
    }
    while(choice!=5);    
}