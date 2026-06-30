#include<iostream>
#include<string>
using namespace std;
class employee
{ public:
    string name;
    int id;
  employee()
  { 
    cout<<"enter employee name=";
    cin>>name;
    cout<<"enter employee id=";
    cin>>id;

  }
  void display()
  { cout<<"employee name="<<name;
    cout<<endl<<"employee id="<<id;
 }};
int main()
{
    employee e;
    e.display();
    return 0;
}
