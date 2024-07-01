#include <bits/stdc++.h>        //Binary Search (applicable for sorted arrays only)
using namespace std;

int BinarySearch(int a[], int n, int key){
    int start=0, end=n-1, mid;
    while(start<=end){
        mid= (start+end)/2;             //Also, mid= start + (end-start)/2 = end + (start-end)/2
        if(a[mid]==key)
           return mid;
        else if(a[mid]<key)            //means element is present at right side
           start= mid+1;
        else end= mid-1;               //else element is at right side
    }
    return -1;                        //element if not present
}

int main()
{
    int n,i,key;
    cout<<"Enter element size: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
        cin>>a[i];
        
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int index= BinarySearch(a, n, key);
    if(index==-1)
       cout<<"Element is not present.";
    else cout<<"Element is present at index "<<index<<".";
    
    return 0;
}