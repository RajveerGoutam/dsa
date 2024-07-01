#include <iostream>      //2nd largest element in the array
using namespace std;

int secondLargest(int arr[], int n){
    //Largest element
    int largest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest)
        largest= arr[i];
    }
    //second largest
    int ans= arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]!=largest)
        ans= max(ans,arr[i]);
    }
    
    return ans;
}

int main()
{   
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array= ";
    for(int i=0; i<n; i++)
    cin>>a[i];
    cout<<"Second Largest element= "<<secondLargest(a,n);
    
    return 0;
}