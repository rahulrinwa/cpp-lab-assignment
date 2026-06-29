#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{   string s="apple";
    map<char,int>m;
    for(auto i:s)
    { m[i]++;}
    for(auto i:m)
    {cout<<i.first<<" "<<i.second<<endl;}
    return 0;
}