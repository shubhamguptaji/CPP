#include<iostream>
using namespace std;
class shape
{
public:
double x,y;
void getdata()
{
cin>>x>>y;
}
virtual void display()
{
cout<<x<<endl<<y;
}
};
class triangle:public shape
{
public:
double area;
void display()
{
area = 0.5*x*y;
cout<<"area of triangle is"<<area<<endl;
}
};
class rectangle: public shape
{
public:
double area;
void display()
{
area = x*y;
cout<<"area of rectangle is:"<<area<<endl;
}
};
int main()
{
shape s,*ptr;
triangle t;
rectangle r;
ptr = &r;
ptr->getdata();
ptr->display();
ptr=&t;
ptr->getdata();
ptr->display();


}