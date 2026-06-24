#include<iostream>
#include<string>
using namespace std;
int main()
{ string s="mahabharat";
    int count=0;
   for(int i=0;i<s.size();i++)
   { if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u')
           count++;
   }  
   cout<<"no of vowel in the given string are="<<count;
    return 0;
}