#include<iostream>
using namespace std;
void swap(int *a,int *b)
{ int c=*a;
    *a=*b;
    *b=c;
   

}
int main()
{  int a,b;
    cout<<"before swap="<<endl;
    cout<<"value of a=";
    cin>>a;
    cout<<"value of b=";
    cin>>b;
    cout<<"after swap="<<endl;
    swap(&a,&b);
    cout<<"value of a="<<a<<endl<<"value of b="<<b;
    return 0;
}