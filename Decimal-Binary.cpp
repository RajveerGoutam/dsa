#include <iostream>           //decimal to binary
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rem, ans=0, mul=1;
    while(num>0)
    {
        rem=num%2;
        num/=2;       //means num=num/2;
        ans=rem*mul+ans;
        mul*=10;
    }
    cout<<ans;
    
    return 0;
}
