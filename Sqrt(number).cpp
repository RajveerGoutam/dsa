#include <bits/stdc++.h>  //Square root of a number
using namespace std;
int main()
{   
    int x,i=1;
    cout<<"Enter the number: ";
    cin>>x;
    while(i*i<=x)
       i++;
    cout<<"Square root of "<<x<<" is "<<i-1;
    return 0;
}
