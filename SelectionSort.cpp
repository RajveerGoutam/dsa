#include <bits/stdc++.h>        //selection sort
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter element size: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
        cin>>a[i];
        
        //sorting
    for(i=0; i<n-1; i++){
        int index=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[index])
               index=j;
        }
        swap(a[i],a[index]);
    }
    cout<<"Sorted array: ";
    for(i=0;i<n; i++){
       cout<<a[i]<<" ";
    }
    return 0;
}