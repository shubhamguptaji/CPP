#include<iostream>
using namespace std;
class a
{
public:
a()
{
cout<<"A constructor\n";
}
~a()
{
cout<<"A destructor\n";
}
};
class b:public a
{
public:
b()
{
cout<<"B constructor\n";
}
~b()
{
cout<<"B destructor\n";
}
};
main()
{
a *a=new b;
delete a;
}