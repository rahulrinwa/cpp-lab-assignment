#include<iostream>
using namespace std;
int main()
{ int a,b,c,d,e;
    float total,per;
    cout<<"enter a,b,c,d,e=";
    cin>>a>>b>>c>>d>>e;
    total=a+b+c+d+e;
    cout<<"total="<<total;
    per=(total/500)*100;
    cout<<endl<<"percantage="<<per;
    if(per>=90)
    { cout<<"Grade="<<"A";}
    if(per<90 && per>=70)
    { cout<<"Grade="<<"B";}
     if(per<70 && per>=50)
    { cout<<"Grade="<<"C";}
     if(per<50 && per>=33.3)
    { cout<<"Grade="<<"B";}
    if(per<33.3)
    { cout<<"Grade="<<"FAIL";}


}