#include <bits/stdc++.h>        //Kth positive integer missing in sorted array (using Binary search)
using namespace std;

int MissingInteger(int a[], int n, int k){
    int start=0, end=n-1, mid, ans;
    while(start<=end){
        mid= start + (end-start)/2;
        if(a[mid]-mid-1 >= k){
            ans= mid;
            end= mid-1;
        }
        else start= mid+1;
    }
return ans+k;
}
int main()
{
    int n,i,k;
    cout<<"Enter element size: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
        cin>>a[i];
        
    cout<<"Enter the Kth position whose +ve integer to be known: ";
    cin>>k;
    cout<<"The "<<k<<"th positive integer missing is "<<MissingInteger(a, n, k)<<".";
    return 0;
}