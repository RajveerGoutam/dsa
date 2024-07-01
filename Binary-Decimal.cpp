#include <iostream>           //binary to decimal
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rem, ans=0, mul=1;
    while(num>0)
    {
        rem=num%10;
        num/=10;       //means num=num/10;
        ans=rem*mul+ans;    //or  ans+=rem*mul;
        mul*=2;
    }
    cout<<ans;
    
    return 0;
}
