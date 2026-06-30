#include<iostream>
using namespace std;
class bank
{ public:
  int depositdata;
  int withdrawdata;
  void deposit()
  { cout<<"enter deposit data=";
    cin>>depositdata;
 }
 void withdraw()
  { cout<<"enter withdraw data=";
    cin>>withdrawdata;
 }
 int final()
 {
    return depositdata-withdrawdata;
 }

};
int main()
{
    bank b;
    b.deposit();
    b.withdraw();
    cout<<"final balance="<<b.final();
}