#include <bits/stdc++.h>  // Find bitwise complement of a number
using namespace std;
int main()
{   
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int ans=0, rem, mul=1;
    while(x){
        rem=x%2;          
        if(rem==1)        //making 1's complement
           rem=0;        //we can also use rem=rem^1;ie,rem xor 1
        else rem=1;      //instead of if else statement
        x/=2;
        ans+=rem*mul;   //getting decimal form of the complement
        mul*=2;
    }
    cout<<ans;
    return 0;
}
