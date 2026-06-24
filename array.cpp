#include<iostream>
using namespace std;
int main()
{ int a[5]={11,13,56,23,66},sum=0;
    for(int  i=0;i<5;i++)
    { sum+=a[i];}
    cout<<"sum of array="<<sum;
    return 0;
}