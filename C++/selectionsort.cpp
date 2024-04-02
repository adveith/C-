#include<iostream>
#using namespace std;

int main(){
    int arr[10]={6,2,8,4,23,1,10,32,34,21};

    int i,j,minindex=0,temp,cnt=0;
        for(i=0;i<10;i++)
        {
            minindex=i;
            for(j=i+1;j<10;j++){
                if(arr[j]<arr[minindex]){
                    minindex=j;
                }
                cnt++;



            }
            if(minindex!=i){
                temp=arr[i];
                arr[i]=arr[minindex];
                arr[minindex]=temp;
            }
        
        }
       
   
    for(i=0;i<10;i++){
        std::cout<<arr[i]<<"\t";
    }

}