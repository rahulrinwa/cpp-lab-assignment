#include<iostream>
using namespace std;
class  data
{ public:
    int lenght;
    void setlenght(int lenght)
    { this->lenght=lenght;
    }
    void display()
    {
        cout<<"lenght="<<lenght;
    }

};
int main()
{ data d;
    d.setlenght(10);
    d.display();

}