#include<iostream>
using namespace std;
int main()
{   int n,l,p=1,sum=0;
    cout<<"number in decimal=";
    cin>>n;
    while (n>0)
    { l=n%2;
        n=n/2;
      l=l*p;
      p=p*10;
      sum+=l; 
        
    } cout<<"number in binary="<<sum;
    
    return 0;
}