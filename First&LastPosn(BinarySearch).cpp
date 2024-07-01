#include <bits/stdc++.h>        //1st & last position in sorted array (using Binary search)
using namespace std;

void position(int a[], int n, int target){
    //first position
    int start=0, end=n-1, mid, first=-1, last=-1;
    while(start<=end){
        mid= start + (end-start)/2;
        if(a[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(a[mid]<target)
           start= mid+1;
        else end= mid-1;
    }
    cout<<"First postion= "<<first<<endl;
    //last position
    start=0, end=n-1, mid, first=-1, last=-1;
    while(start<=end){
        mid= start + (end-start)/2;
        if(a[mid]==target){
            last=mid;
            start=mid+1;
        }
        else if(a[mid]<target)
           start= mid+1;
        else end= mid-1;
    }
    cout<<"Last postion= "<<last<<endl;
}
int main()
{
    int n,i,target;
    cout<<"Enter element size: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
        cin>>a[i];
        
    cout<<"Enter the element whose position to be known: ";
    cin>>target;
    position(a, n, target);
    return 0;
}