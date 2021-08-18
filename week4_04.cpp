#include<iostream>
using namespace std;
int merge(int arr[],int l,int mid,int r){
    int inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        arr[i]=arr[l+i];
    }
     for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=1;
    while(i<n1 || j<n2){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            inv +=n1-i;
            k++;j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2){
            arr[k]=b[j];
            k++;j++;
       
    }        
 return inv; 
    
}

int merge_sort(int arr[],int l,int r)
{
    int inv = 0;
    if(l<r){
        int mid = (l+r)/2;
       inv += merge_sort(arr,l,mid);
       inv += merge_sort(arr,mid,r);
       inv += merge(arr,l,mid,r);
    }
    return inv;
}
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<merge_sort(arr,0,n-1);
        return 0;
    }
}