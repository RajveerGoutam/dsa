#include <bits/stdc++.h>  //Reverse integer
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rem, ans=0;
    while(num){
        rem=num%10;
        num/=10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10)
        return 0;
        ans= ans*10+rem;
    }
    cout<<ans;
    return 0;
}
