#include<iostream>
#include<map>
using namespace std;
int main()
{   int arr[10]={1,1,2,2,2,3,4,4,5,5};
    map<int,int>m;
    for(auto i:arr)
    { m[i]++;}
    for(auto i:m)
    { cout<<i.first<<" "<<i.second<<endl;}
    return 0;
}