#include<iostream>
using namespace std;
int power(int a,int b)
{ int   pow=1;
    for(int i=1;i<=b;i++)
    { pow=pow*a; }
     return pow;
}
int main()
{ int a,b;
    cout<<"enter a and b=";
    cin>>a>>b;
    cout<<power(a,b);

}