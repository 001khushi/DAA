#include<iostream>
using namespace std;
int binarysearch(int arr[],int n, int x, int searchfirst)
{
    int low=0,high=n-1;
    int result=-1;
    while(low <= high)
    {
        int mid=(low + high)/2;
        if(x==arr[mid])
        {
            result=mid;
            if(searchfirst){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else if(x < arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
}
int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
        int n;
        cin>>n;
        int arr[50];
        for(int i;i<n;i++)
        {
            cin>>arr[n];
        }
        int key;
        cin>>key;
        int first= binarysearch(arr,n,key,1);
        int last= binarysearch(arr,n,key,0);
        int count= last - first + 1;
        if(first!= -1){
            cout<<key<<" -"<<count;
        }
        else{
            cout<<"No sequence found";
        }
     
    
//}
return 0;
}