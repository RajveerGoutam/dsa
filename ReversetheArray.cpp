#include <iostream>      //Reverse the array
using namespace std;
int main()
{   
    int a[]={6,11,7,4,8,9};
    int temp[6];
    int i=5,j=0;
    cout<<"By use of temp array ";
    while(i>=0){
        temp[j]=a[i];
        i--;
        j++;
    }
    cout<<"\nReversed array= ";
    for(i=0; i<6; i++)
        cout<<temp[i]<<" ";
    
    cout<<"\n\nBy use of swap function";
    int start=0, end= 5;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    cout<<"\nReversed array= ";
    for(i=0; i<6; i++)
    cout<<a[i]<<" ";
    
    return 0;
}