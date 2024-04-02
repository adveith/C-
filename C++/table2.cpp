#include<iostream>
using namespace std;
int main()
{
    int num, i=1, result;
    cout<<"Enter the number you want to do multiplication"<<endl;
    cin>>num;
    do
    {
        cout<<num<<" * "<<i<<" = "<<num*i;
        i++;
        cout<<endl;
    }while(i<=10);
}