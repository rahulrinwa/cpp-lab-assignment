#include<iostream>
using namespace std;
int main()
{  int n,count=0;
    cout<<"enter n value=";
    cin>>n;
    while(n>0)
    {  n=n/10;
        count++;

    } cout<<"number of digit="<<count;
    return 0;
}