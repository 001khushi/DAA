
#include<iostream>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
int n,flag=0;
cin>>n;
int arr[10];
int i,j,k;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
for(k=i+2;k<n;k++)
{
if( arr[k] = arr[i] + arr[j] ){
flag=1;
break;
}
}
if(flag)
break;
}
if(flag)
break;
}
if (flag==1) {
cout<<arr[i]<<" "<<arr[j]<< " "<<arr[k]<<"\n";
}
else
{
cout<<"Sequence Not Found"<<endl;
}

}
}