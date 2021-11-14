#include<iostream>
using namespace std;
  
void printRepeating(int arr[], int size)
{
    int i, j,flag=0;
    for(i = 0; i < size-1; i++){
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j]){
               flag=1;
               break;
            }
               
        }
    }
    if(flag==1)
    {
        cout<<"Yes\n";   
    }
    else{
        cout<<"No";
    }
      
} 
  
int main()
{ 
    int n,flag=0;
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    printRepeating(arr, n);
    
    return 0;
}