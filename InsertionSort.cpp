#include <bits/stdc++.h>        //Insertion sort
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
    for(i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if(a[j]<a[j-1])
               swap(a[j],a[j-1]);
            else break;
        }
    }
    cout<<"Sorted array: ";
    for(i=0;i<n; i++){
       cout<<a[i]<<" ";
    }
    return 0;
}