#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{   vector<int>v={1,1,2,3,3,4};
    set<int>seen;
    set<int>unique;
    for(int i:v)
    { if(seen.find(i)==seen.end())
        { seen.insert(i);
         unique.insert(i);
    } else
    { unique.erase(i);}}
    for(int i:unique)
    { cout<<i<<" ";}

    
    return 0;
}