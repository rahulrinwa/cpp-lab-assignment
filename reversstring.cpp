#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{  string s="the sky is blue",ans="";
    reverse(s.begin(),s.end());
   // cout<<s; 
   // string word="";
    for(int i=0;i<s.size();i++)
    { string word="";
        while(i<s.length() && s[i]!=' ')
        { word+=s[i];
        i++;}
        reverse(word.begin(),word.end());
       if(word.length()>0)
       { ans+=' '+word;}}
       cout<<ans;
    
    return 0;
}