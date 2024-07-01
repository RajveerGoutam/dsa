#include <bits/stdc++.h>  // Min, Max & size of an array
using namespace std;

int main()
{   
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int a[n], i=0;
    cout<<"Enter the elements: ";
    while(i<n){
    cin>>a[i];
    i++;
    }
    //Minimum element
    int min= a[0];
    for(i=0; i<n; i++){
        if(a[i]<min)
        min=a[i];
    }
    cout<<"Minimum element is "<<min<<" at index "<<i-1<<endl;
    
   //Maximum element
   int max= a[0];
    for(i=0; i<n; i++){
        if(a[i]>max)
        max=a[i];
    }
    cout<<"Maximum element is "<<max<<" at index "<<i-1<<endl;
    
   //Sizeof(array)
   cout<<"Size of given array= "<<sizeof(a)<<endl;
   cout<<"No. of elements of given array= "<<sizeof(a)/sizeof(a[0])<<endl;
    return 0;
}
