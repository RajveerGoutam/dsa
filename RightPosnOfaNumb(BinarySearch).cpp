#include <bits/stdc++.h>        //Right position of a number in sorted array (using Binary search)
using namespace std;

int position(int a[], int n, int target){
    //first position
    int start=0, end=n-1, mid, ans=n;
    while(start<=end){
        mid= start + (end-start)/2;
        if(a[mid]==target){
            ans= mid;
            break;
        }
        else if(a[mid]<target)
           start= mid+1;
        else{
            ans=mid;
            end= mid-1;
    }
}
return ans;
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
        
    cout<<"Enter the number whose right position to be known: ";
    cin>>target;
    cout<<"The right position of "<<target<<" in given array should be "<<position(a, n, target)<<".";
    return 0;
}