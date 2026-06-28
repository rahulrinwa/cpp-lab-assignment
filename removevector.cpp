#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   vector<int>vec={1,2,2,3,3,4,5};
    for(int i:vec)
    { int n=vec[i];
        for(int j=i+1;j<vec.size();j++)
        { if(n==vec[j])
            { vec.erase(vec.begin()+j);}

        }

    }for(int i:vec)
    {cout<<i<<" ";}
    return 0;
}