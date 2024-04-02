#include <iostream>
using namespace std;
int main()
{
    int present=0,i,x,n;
    cout<<"Enter the number : - "<<endl;
    cin>>n;
    int arr[n]={1,3,5,7,9};
    for (int i = 0; i < n; i++) 
    {
    cin >>x;
    }
    for (int i = 0; i <x;i++)
    {
        if (x==n)
        {
            present=1;   
        }
    } 
    if(present==1)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    } 
}

