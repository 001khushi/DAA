#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int count=1;
   
    int s=0;
     int e=n;
    while(s<=e){
        int mid=(s+e)/2;
           count++;
       if(arr[mid]==key){
             cout<<"present"<<endl;
             cout<<"comparison"<<count<<endl;
             return mid;
            
        }
         else if(arr[mid]>key){
             e=mid-1;
            }
         else{
             s=mid+1;
            }
              
            }
            
            cout<<"not Present";
            return -1;
           
}
int main()
{
        
    
     int n;
     cin>>n;
     int arr[n],key;
     for(int i=0;i<n;i++) {
        cin>>arr[i];
        }
        cin>>key; 
        cout<<binarysearch(arr,n,key);
        
        

    return 0;
}