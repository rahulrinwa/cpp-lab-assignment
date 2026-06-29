#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{   int a[11]={1,1,2,2,2,2,3,3,4,4,5};
    map<int,int>m;
    for(auto i:a)
    { m[i]++;}
    int max=m[0];
    for(int i=0;i<m.size();i++)
    { if(m[i]>max)
        { max=m[i];}

    } cout<<"max="<<max;
    return 0;
}