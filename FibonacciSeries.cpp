#include <bits/stdc++.h>      //Fibonacci series(Finding nth element)
using namespace std;         // 0, 1, 1, 2, 3, 5, 8, 13, 21,.... 

int main()
{   
    int n,i;
    cout<<"Enter the term number= ";
    cin>>n;
    
    int f[n];
    f[0]=0;
    f[1]=1;
    
    if(n==1)
      cout<<"1st term= "<<f[0];
    else if(n==2)
      cout<<"2nd term= "<<f[1];
    else{
         for(i=2; i<n; i++)
           f[i]= f[i-1] + f[i-2];
           cout<<n<<"th term of the Fibonacci series= "<<f[i-1];
    }
   
    return 0;
}