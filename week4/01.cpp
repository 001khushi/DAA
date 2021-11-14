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