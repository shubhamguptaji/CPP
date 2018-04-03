#include<iostream>
using namespace std;
void area(float a, float b)
{
int c=a*b;
cout<<"area of rectangle is"<<c<<endl;
}
void area(int a)
{
int c=a*a;
cout<<"area of square is "<<c<<endl;
}
void area(double a)
{
float c=3.14*a*a;
cout<<"area of circle is "<<c<<endl;
}
int main()
{
area(20.0,40.0);
area(41);
area(14.0);
return 0;
}