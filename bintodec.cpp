#include<iostream>
using namespace std;
int main()
{   int n,l,p=1,sum=0;
    cout<<"number in binary=";
    cin>>n;
    while (n>0)
    { l=n%10;
       l=l*p;
       p=p*2;
       sum+=l;
       n=n/10;
        
    } cout<<"number in decimal="<<sum;
    
    return 0;
}