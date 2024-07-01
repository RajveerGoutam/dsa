#include <bits/stdc++.h>      //Find missing number in the array range 1 to N contained in
using namespace std;     //array of size N-1

int missingNumber(vector<int>& array, int n){
    int sum=0;
    for(int i=0; i<n; i++)
    sum+=array[i];
    
    int a= array[0];
    int TotalSum=(2*a+n)*(n+1)/2;
    
    return TotalSum-sum;
}

int main()
{   
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    vector<int> vect;
    cout<<"Enter the elements of the array= ";
    for(int i=0; i<n; i++){
    int x;
    cin>>x;
    vect.push_back(x);
    }
    sort(vect.begin(), vect.end());
    cout<<"Missing Number= "<<missingNumber(vect,n);
    
    return 0;
}