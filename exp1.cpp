#include<iostream>
using namespace std;
class one
{
int a,b;
public:
void getdata(int x,int y)
{
a=x;
b=y;
}
void display()
{
cout<<a<<endl;
cout<<b<<endl;
}
void swapvalue(int x,int y)
{
int temp=x;
x=y;
y=temp;
cout<<"value of a is "<<x<<endl;
cout<<"value of b is "<<y<<endl;
}
void swapreference(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
cout<<"value of a is "<<*x<<endl;
cout<<"value of b is "<<*y<<endl;
}
};


int main()
{
one o,p;
o.getdata(10,20);
o.display();
o.swapvalue(10,20);
cout<<"after swapping"<<endl;
p.getdata(15,25);
p.display();
int a=15,b=25;
p.swapreference(&a,&b);
cout<<"after swapping"<<endl;
return 0;
}