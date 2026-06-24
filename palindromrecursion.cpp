#include<iostream>
using namespace std;
int pali(int n)
{      if(n==0)
    { return 0;}
      return (n%10)+pali(n/10)*10;
}
int main()
{   int n;
    cout<<"enter n value=";
    cin>>n;
    int r=n;
    int m=pali(n);
    
    if(r==m)
    { cout<<"palindrom";}
    else{ cout<<"not palindrom";}
    return 0;
}