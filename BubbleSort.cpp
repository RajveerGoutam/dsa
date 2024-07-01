#include <bits/stdc++.h>        //Bubble sort
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
    for(i=n-2; i>=0; i--){
        bool swapped=0;
        for(int j=0; j<=i; j++){
            if(a[j]>a[j+1]){
               swap(a[j],a[j+1]);
               swapped=1;
            }
        }
        if(swapped==0);
            break;
    }
    cout<<"Sorted array: ";
    for(i=0;i<n; i++){
       cout<<a[i]<<" ";
    }
    return 0;
}