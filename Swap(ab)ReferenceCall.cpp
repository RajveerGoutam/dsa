#include <bits/stdc++.h>  // Swapping of 2 nos. using pass by reference function calling
using namespace std;
void swap(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}
int main()
{   
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<"Original numbers:\n"<<"a= "<<a<<"  b= "<<b<<endl;
    swap(a,b);
    cout<<"Swapped numbers:\n"<<"a= "<<a<<"  b= "<<b<<endl;
    return 0;
}
