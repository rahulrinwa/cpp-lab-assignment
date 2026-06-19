#include<iostream>
using namespace std;
int main()
{ int chioce;
    cout<<"enter chioce=";
    cin>>chioce;
   int a,b;
    cout<<"enter a and b=";
    cin>>a>>b;
    switch (chioce)
    { case 1: cout<<"sum="<<a+b; break;
       case 2: cout<<"subtraction="<<a-b; break;
        case 3: cout<<"multiple="<<a*b;  break;
         case 4: cout<<"division="<<a%b; break;
    
    default:cout<<"wrong chioce";
        break;
    }

}