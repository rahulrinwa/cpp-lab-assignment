#include<iostream>
#include<set>
using namespace std;
int main()
{   set<int>s={1,1,2,3,3,4,5,5,6,6};
    for(int i:s)
    { cout<<i<<" ";}
    return 0;
}