#include<iostream>
#include<math.h>
using namespace std;
class complex
{
int a,b,c,d;
public:
void getdata()
{
cin>>a>>b;
}
void addition(complex c1,complex c2)
{
complex c4;
c4.a=c1.a +c2.a;
c4.b=c1.b+c2.b;
cout<<"On adding two complex numbers, result is: "<<c4.a<<"+i"<<c4.b<<endl;
}
void subtract(complex c1,complex c2)
{
complex c4;
c4.a=c1.a -c2.a;
c4.b=c1.b-c2.b;
cout<<"On subtracting two complex numbers, result is: "<<c4.a<<"+i"<<c4.b<<endl;
}
void multiply(complex c1,complex c2)
{
complex c4;
c4.a=(c1.a *c2.a)-(c1.b*c2.b);
c4.b=(c1.a *c2.b)+(c1.b*c2.a);
cout<<"On multiplying two complex numbers, result is: "<<c4.a<<"+i"<<c4.b<<endl;
}
void divide(complex c1,complex c2)
{
complex c4;
c4.a=((c1.a *c2.a)+(c1.b*c2.b))/(pow(c2.a,2)+pow(c2.b,2));
c4.b=((c1.a *c2.b)-(c1.b*c2.a))/(pow(c2.a,2)+pow(c2.b,2));
cout<<"On dividing two complex numbers, result is: "<<c4.a<<"+i"<<c4.b;
}
};
int main()
{
complex c1,c2,c3;
cout<<"Enter first complex number"<<endl;
c1.getdata();
cout<<"Enter second complex number"<<endl;
c2.getdata();
c3.addition(c1,c2);
c3.subtract(c1,c2);
c3.multiply(c1,c2);
c3.divide(c1,c2);
}