#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ string s1,s2;
    cout<<"enter string s1=";
    cin>>s1;
    cout<<"enter string s2=";
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    { cout<<"anagram";}
    else{ cout<<"not anagram";}
    return 0;
}