#include<iostream>
using namespace std;
int main()
{   int a[3][3],b[3][3],c[3][3];
    int n=3;
    cout<<"enter a array=";
    for(int i=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        { cin>>a[i][j];} }
    for(int i=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        { cout<<a[i][j]<<" ";}cout<<endl; }  cout<<endl<<"enter b array=";  
     for(int i=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        { cin>>b[i][j];} }
    for(int i=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        { cout<<b[i][j]<<" ";}cout<<endl; } 
     for(int i=0;i<n;i++)
    {  for(int j=0;j<n;j++)
        { c[i][j]=a[i][j]+b[i][j];
           cout<<c[i][j]<<" ";}cout<<endl;}

               
    return 0;
}