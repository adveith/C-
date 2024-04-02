#include <iostream>
using namespace std;
int main()
{
    int arr[12]={20,56,132,7,1,457,12,67,124,67,32,56}; 
    int i,swap=0,temp;
    while (1)
    {
        swap=0;
        for(i=0;i<12;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swap=1;
            }
        }
        if (swap==0)
        {
            break;
        }
    }
    for(i=0;i<12;i++)
    {
        cout<<arr[i]<<"\t";
    }
}