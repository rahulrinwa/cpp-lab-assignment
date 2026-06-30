#include<iostream>
using namespace std;
class  car
{ public:
    static int x;
   
   car()
   { x++;}
   void data()
   { 
    cout<<"total car object=";
       cout<<x;
      }
};
int car::x=0;
int main()
{
   car c1;
   car c2;
   car c3;
   c3.data();
}

