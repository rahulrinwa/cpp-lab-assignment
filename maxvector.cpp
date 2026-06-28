#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={22,43,65,78,9};
    int max=vec[0];
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]>max)
        { max=vec[i];
        }
    } cout<<"maximum element="<<max;
    return 0;
}