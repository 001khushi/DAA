//Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and implement it using a program to find which alphabet has maximum number of occurrences and print it. (Time Complexity = O(n)) (Hint: Use counting sort)

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char ch[n];
        for(int i=0;i<n;i++)
            cin>>ch[i];
            
        int count[26]={0};
        for(int i=0;i<n;i++)
            count[(int)ch[i]-97]+=1;
        int max=1;
        char c='a';
        for(int i=0;i<26;i++)
        {
            if(max<count[i])
            {
                max=count[i];
                c=i+97;
            }
        }
        if(max>1)
            cout<<c<<" - "<<max;
        else
            cout<<"No Duplicates Present";
        cout<<endl;
    }
    return 0;
}