#include<iostream>
using namespace std;
int main()
{ int a[5]={11,23,43,5,34};
int max=a[0];
    for(int i=0;i<5;i++)
    { 
       if(a[i]>max)
       { max=a[i];} 
      }  cout<<"maximum element="<<max;
    
    return 0;
}