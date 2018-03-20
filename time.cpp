#include<iostream>
using namespace std;
int main()
{
int a,b;
float c;
cout<<"enter the time in minutes";
cin>>a;
{
if(a>=60)
{
b=a/60;
c=a%60;
}
else
c=a;
}
cout<<"hours\t"<<b;
cout<<"minutes\t"<<c;
}
