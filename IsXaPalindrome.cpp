#include <bits/stdc++.h>  // Is a number palindrome
using namespace std;
int main()
{   
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int ans=0, rem, num=x;
    if(x<0){
        cout<<"0";
        return 0;
    }
    
    while(num){  //means x!=0
        rem=num%10;
        num/=10;
        if(ans>INT_MAX/10){
        cout<<"0";
        return 0;
    }
        ans=ans*10+rem;
    }
    if(ans==x)
    cout<<"YES, a palindrome.";
    else cout<<"NO, not a palindrome.";
    
    return 0;
}
