#include<iostream>
#include<algorithm>
using namespace std;
int main()
{  string s;
    cout<<"enter an string=";
    cin>>s;
    string a=s;
    reverse(s.begin(),s.end());
    if(a==s)
    { cout<<"palindrom";}
        else
    {cout<<"not palindrom";}

    return 0;
}