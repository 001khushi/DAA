#include<iostream>
using namespace std;
int insertionsort(int arr[],int n)
{
    int i,j,key,c1=0;
    for(i=0;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        c1++;
    }
    return c1;
}
int main()
{
    int t,n;
    cin>>t;
    int arr[50];
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
      cout<<"comparison"<< insertionsort(arr,n); 

    }
}