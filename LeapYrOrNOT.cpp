#include <iostream>           //Leap year or not
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    if(year%400==0)
     cout<<"YES, a Leap Year";
    else if(year%4==0 && year%100!=0)
     cout<<"YES, a Leap Year";
    else cout<<"NOT, a Leap Year";
    return 0;
}
