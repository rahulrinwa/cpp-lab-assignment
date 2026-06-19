#include<iostream>
using namespace std;
int main()
{ int n,l,sum=0;
    cout<<"enter n value=";
    cin>>n;
    while (n>0){
        l=n%10;
        n=n/10;
        sum=(sum+l)*10;
        
    } sum=sum/10;
    cout<<sum;
    

}