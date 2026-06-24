#include<iostream>
using namespace std;
int main()
{  string s;
    cout<<"enter an string=";
    getline(cin,s);
    int count=0;
     bool word=false; 
    for(char ch:s)
    {  if(ch!=' ' && !word)
        { count++;
           word=true;}
        else if(ch==' ')
        { 
            word=false;}

    } cout<<count;
    return 0;
}