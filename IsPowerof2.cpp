#include <bits/stdc++.h>  //Power of 2;if yes then return 1 else 0
using namespace std;
int main()
{
    int num,k=0;
    cout<<"Enter the number: ";
    cin>>num;
    if(num<1)
     cout<<"0";

    else if(num==1)
    cout<<"YES";
    
    else{
        while(num!=1){
             if(num%2==1){
                 k=1;
                 break;
             }
            num/=2;
        }
        if(k==1)
           cout<<"NO";
        else cout<<"YES";
    }
    return 0;
}
