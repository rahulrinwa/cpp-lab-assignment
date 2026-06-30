#include<iostream>
#include<math.h>
using namespace std;
int main()
{  int a,b,c;
    //ax^2+bx+c=0;
    cout<<"enter a,b,c=";
    cin>>a>>b>>c;
    int D=(b*b)-(4*a*c);
    int p=pow(D,0.5);
    if(D>0)
    { int x=(-b+p)/(2*a);
      int y=(-b-p)/(2*a);
      cout<<"roots are="<<endl;
      cout<<x<<endl<<y;

    }
    else if(D==0)
    { int x=-b/(2*a);
        cout<<"root are =";
        cout<<endl<<x<<endl<<x;

    }
    else{ cout<<"root not exist";}
    return 0;
}