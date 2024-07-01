#include <iostream>      //search elements in the array
using namespace std;
int main()
{   
    int i;
    cout<<"Array= ";
    int a[]={5,6,3,4,8,1,2,7,9,20,18,10,12,11,13,14,15};
    int n= sizeof(a)/sizeof(a[0]);
    for( i=0; i<n; i++)
        cout<<a[i]<<" ";
        
    int x;
    cout<<"\nEnter the element you want to search in the above array : ";
    cin>>x;
    
    for(i=0; i<n; i++){
        if(a[i]==x)
        break;
    }
    cout<<"Index= "<<i;
    return 0;
}