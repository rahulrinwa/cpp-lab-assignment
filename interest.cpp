#include<iostream>
using namespace std;
int main()
{   int p,r,t;
    cout<<"enter principal value=";
    cin>>p;
    cout<<"enter rate value=";
    cin>>r;
    cout<<"enter time period=";
    cin>>t;
    cout<<"interest="<<(p*r*t)/100;
    return 0;
}