#include<iostream>
using namespace std;
class interest
{
int a,r,t,si;
public:
interest()
{
t=2;
}
interest(int amount,int rate,int time=2)
{
a=amount;
r=rate;
t=time;
}
void cal()
{
si=(a*r*t)/100;
}
void display()
{
cout<<si;
}
};
int main()
{
interest i1();
interest i2(10000,5);
interest i3(i2);
i3.cal();
i3.display();
}