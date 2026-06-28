#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{   vector<int>a={1,2,3,4,5};
    vector<int>b={3,4,5,6,7};
    set<int>s;
    set<int>result;
    for(int i=0;i<a.size();i++)
    {   s.insert(a[i]);
     }
    for(int i=0;i<b.size();i++)
    { if(s.find(b[i])!=s.end())
        { result.insert(b[i]);}

    }for(int i:result)
    { cout<<i<<" ";}
     
    return 0;
}