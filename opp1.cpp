#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    double marks;
    void input()
    { cout<<"enter student name=";
      cin>>name;
      cout<<"enter student roll no=";
      cin>>roll;
      cout<<"enter student marks=";
      cin>>marks;}
    void output()
    { cout<<"student name="<<name<<endl;
      cout<<"student roll no.="<<roll<<endl;
      cout<<"student marks="<<marks<<endl;
    }

};
int main()
{
    Student s;
    s.input();
    s.output();
    return 0;
}