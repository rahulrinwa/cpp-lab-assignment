#include<iostream>
using namespace std;
int main()
{  int a,b,c;
    cout<<"enter a,b,c =";
    cin>>a>>b>>c;
    if(a>b)
    { if(a>c)
        {cout<<"a is largest";}
        else{cout<<"c is largest";}
 }
     else{
        if(b>c)
        { cout<<"b is largest";
        }else{ cout<<"c ia largest";}
     }
    return 0;
}