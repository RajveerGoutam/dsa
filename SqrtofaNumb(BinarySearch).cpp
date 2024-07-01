#include <bits/stdc++.h>        //Square Root of a number (using Binary search)
using namespace std;

int mySqrt(int x){
    if(x<2)
    return x;
    int start= 0, end=x, mid, ans;
    while(start<=end){
        mid= start + (end-start)/2;
        if(mid==x/mid){
            ans= mid;
            break;
        }
        else if(mid<x/mid){
            ans= mid;
            start= mid+1;
        }
        else end= mid-1;
    }
return ans;
}

int main()
{
    int n;
    cout<<"Enter number whose sqrt to be known: ";
    cin>>n;
    cout<<"Sqrt("<<n<<")= "<<mySqrt(n);
    return 0;
}