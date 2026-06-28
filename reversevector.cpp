#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    reverse(vec.begin(),vec.end());
    cout<<"reversed vector is "<<endl;
    for(int i:vec)
    { cout<<i<<" ";}
    return 0;
}