#include<iostream>
#include<map>
using namespace std;
int main()
{   int a[10]={1,1,2,2,2,4,3,4,5,3};
    map<int,int>m;
    for(int i:a)
    { m[i]++;}
    cout<<"frequceny of 1 is="<<m[1];
    cout<<endl;
    cout<<"frequceny of 5 is="<<m[5];
    return 0;
}