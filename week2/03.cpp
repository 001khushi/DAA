#include <iostream>
using namespace std;
difference(int arr[],int n,int k)
{
    int i,j;
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]-arr[j]==k || arr[j]-arr[i]==k)
            {
                count++;
            }
            
        }
    }
    return count;
}

int main()
{
    int n,t,k;
    int arr[50];
    cin>>t;
    while(t--)
    {
            cin>>n;
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            cin>>k;
           cout<<" "<<difference(arr,n,k);
    }
return 0;
}