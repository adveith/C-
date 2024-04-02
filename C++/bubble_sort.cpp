#include<iostream>

int main(){
    int arr[10]={6,2,8,4,23,1,10,32,34,21};

    int i,j,k=0,temp;
    while(1)
    {
        k=0;
        for(i=0;i<10-1;i++)
        {
        if(arr[i]>arr[i+1])
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            k=1;
        }
        }
        if(k==0)
        {
            break;
        }
    }
    for(i=0;i<10;i++){
        std::cout<<arr[i]<<"\t";
    }

}