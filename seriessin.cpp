#include<iostream>
#include<math.h>
using namespace std;
double p(double x,double n)
{
     return pow(x,n);
    }
double fact(double n)
{   double f=1;
   for(int i=1;i<=n;i++)
    { f=f*i;}
    return f;}
     
int main()
{   double x,n;
    cout<<"enter x ans n=";
    cin>>x>>n;
    double sum=0;
    double sign=1;
    for(int i=1;i<=n;i=i+2)
    {
        sum+=sign*(p(x,i)/fact(i));
        sign=-sign;
    } cout<<"sum="<<sum;
    return 0;
}