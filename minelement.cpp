#include<iostream>
using namespace std;
int main()
{ int a[5]={11,23,43,5,34};
int min=a[0];
    for(int i=0;i<5;i++)
    { 
       if(a[i]<min)
       { min=a[i];} 
      }  cout<<"minimum element="<<min;
    
    return 0;
}