#include<iostream>
using namespace std;
int main()
{ int a,b;
    cout<<"enter a and b value=";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a<<endl<<"b="<<b;
    return 0;
}
