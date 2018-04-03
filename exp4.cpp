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
};
class triangle: public shape
{
    double tarea;
    public:
    void area()
    {
    tarea=(x*y)/2;
    cout<<"Area of triangle is: "<<tarea<<endl;
    }
};
class rectangle: public shape
{
    double rarea;
    public:
    void rectarea()
    {
    rarea=x*y;
    cout<<"Area of rectangle is: "<<rarea<<endl;
    }
};
int main() 
{
    shape s;
    triangle t;
    rectangle r;
    cout<<"Enter base and height of triangle"<<endl;
    t.getdata();
    t.area();
    cout<<"Enter length and breadth of rectangle"<<endl;
    r.getdata();
    r.rectarea();
    return 0;
}