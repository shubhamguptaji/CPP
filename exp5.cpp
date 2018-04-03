#include<iostream>
using namespace std;
class complex
{
    public:
    int x,y;
    void getdata()
    {
        cin>>x>>y;
    }
    friend complex sum(complex,complex);
};
complex sum(complex a,complex b)
{
    complex c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}

int main() {
    complex c1,c2,c3;
    cout<<"Enter first complex number"<<endl;
    c1.getdata();
    cout<<"Enter second complex number"<<endl;
    c2.getdata();
    c3=sum(c1,c2);
    cout<<"After addition, result is: "<<c3.x<<"+i"<<c3.y;
    return 0;
}