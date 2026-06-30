#include<iostream>
using namespace std;
class rectangle
{ public:
    int lenght,width;
    void setdata()
    {  cout<<"enter lenght=";
        cin>>lenght;
     cout<<"enter width=";
        cin>>width;

    }
    int area()
    {
        return lenght*width;
    }
};
int main()
{
    rectangle r;
    r.setdata();
    cout<<"area of rectangle="<<r.area();
}