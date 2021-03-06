/*#include<iostream>
using namespace std;
int count=0;
int merge(int arr[],int l,int mid,int r){
    int inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[mid-l+1];
    int b[r-mid];
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
    
    if(l<r){
        int mid = (l+r)/2;
       merge_sort(arr,l,mid);
       merge_sort(arr,mid,r);
       merge(arr,l,mid,r);
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
        int arr[50];
        for(int i;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<" "<<merge_sort(arr,0,n-1);
        return 0;
    }
}*/
#include<iostream>
using namespace std;
int count = 0;
int n = 0;
const int MAX_ITEMS = 100;
void merge(int values[], int leftFirst, int leftLast, int rightFirst, int rightLast);
void printarray( int a[], int n);
void mergesort(int a[], int start, int end){  
   
    if(start < end){
        int mid = (start+end)/2;   
        mergesort(a,start, mid);
        mergesort(a,mid+1,end);
        merge(a, start,mid, mid+1, end);
    }
}
void merge(int values[], int leftFirst, int leftLast, int rightFirst, int rightLast){
        int temparray[MAX_ITEMS];
        int index = leftFirst;
        int saveFirst = leftFirst;
        while((leftFirst <= leftLast)  && ( rightFirst <= rightLast)){

            if(values[leftFirst] < values[rightFirst]){
                temparray[index]  = values[leftFirst]; 
                leftFirst++;
            }
            else
            {
                temparray[index]  = values[rightFirst];
                rightFirst++;
            }
            index++;
            count++; 
        }
       
        while(leftFirst <= leftLast){ 

            temparray[index] = values[leftFirst];
            leftFirst++;
            index++;
           
        }
        while(rightFirst <= rightLast){
            temparray[index] = values[rightFirst];
            rightFirst++;
            index++;
           
        }
       
        for(index = saveFirst; index <= rightLast; index++)
            values[index] = temparray[index];
        printarray(values,n);
        cout << endl;

    }

void printarray( int a[], int n){
    for (int i=0; i < n; i++)
        cout << a[i] << "  ";
}

int main(){
  
    cout << "Enter number of  elements to be sorted : ";
    cin >>n;

    int a[MAX_ITEMS];
    for (int i=0; i < n; i++){
        if(i==0)
            cout << "Enter the first element: ";
        else
            cout << "Enter the next element: ";
        cin >>     a[i];
    }
   
    int start = 0;
    int end = n-1;
      mergesort(a, start, end);
    printarray(a, n);
    cout << endl;
    cout  << "Number of comparisons : "<< count << endl;
}