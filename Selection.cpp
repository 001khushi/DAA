#include<iostream>
using namespace std;
int main(){
    int count=0,shift=0;
     int n;
    cin>>n;
    int arr[n],i;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            count++;
        }
        shift++;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"count \n"<<count;
    
    return 0;
}