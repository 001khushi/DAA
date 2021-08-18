#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,key;
        cin>>n;
        int arr[n],count=1;
        for(int i;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==key)
            {
                cout<<"present";
                cout<<count;
                
            }
            count++;
        }
    }
    
}