#include<stdio.h>
int arr[100],temp[100],i,m,k,l,comparisons=0,exchanges=0,n,c,mid; 
void mergeSort(int low,int mid,int high);
void partition(int low,int high);
int main()
{
  printf("Enter number of elements: ");
  scanf("%d",&n);
  printf("Enter number: \n");
  for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
  partition(0,n-1);
  printf("Sorted list in ascending order:");
  for(i=0;i<n;i++)
   printf("%d ",arr[i]);
  printf("\n\n no of comparisons: %d",comparisons);
  printf("\n   no of exchanges: %d",exchanges);
  return 0;
}
int comp(int x, int y)
 {  // is x < y ?
  comparisons++;
  return (x < y);
 }
void partition(int low,int high){
  if(low<high){
   mid=(low+high)/2;
   partition(low,mid);
   partition(mid+1,high);
   mergeSort(low,mid,high);
  }
}

void mergeSort(int low,int mid,int high)
{
  l=low;
  i=low;
  m=mid+1;
  
  while((l<=mid)&&(m<=high))
  {
   if(comp(arr[l],arr[m])||(arr[l]==arr[m]) )  //comp function to compare
   {
     temp[i]=arr[l];
     l++;
     exchanges++;
   }
   else
   {
     temp[i]=arr[m];
     m++;
     exchanges++;
   }
   i++;
  }
  if(l>mid)
  {
   for(k=m;k<=high;k++)
   {
     temp[i]=arr[k];
     i++;
     exchanges++;
   }
  }
  else
  {
   for(k=l;k<=mid;k++)
   {
     temp[i]=arr[k];
     i++;
     exchanges++;
   }
  }
  for(k=low;k<=high;k++)
  {
   arr[k]=temp[k];
   exchanges++;
  }
} 