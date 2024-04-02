#include<iostream>
using namespace std;
const int V=4;
void init(int arr[][V])
{
    int i;
    int j;
    for(i==0;i<V;i++)
    for(j==0;j<V;j++)
    arr[i][j]=0;
}
void insert_Edge(int arr[][V], int i, int j)
{  
  arr[i][j] = 1;  
  arr[j][i] = 1;  
}  
void printAdjMatrix(int arr[][V]) 
 {  
  int i;
  int j;  
  for (i = 0; i < V; i++) 
  {
    cout<<i;
  } 
  for (j = 0 ; i < V; i++)
  {
    cout<<arr[i][j]<<endl;
  }
}  
int main() 
{
    int adjMatrix[V][V];  
  
  init(adjMatrix);  
  insert_Edge(adjMatrix, 0, 1);  
  insert_Edge(adjMatrix, 0, 2);  
  insert_Edge(adjMatrix, 1, 2);  
  insert_Edge(adjMatrix, 2, 0);  
  insert_Edge(adjMatrix, 2, 3);  
  printAdjMatrix(adjMatrix);  
  
  return 0;  
}  