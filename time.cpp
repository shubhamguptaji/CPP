#include<iostream>
using namespace std;
class Time
{
int hours,mins;
public:
Time()
{
hours=mins=0;
}
Time(int d)
{
hours = d/60;
mins = d%60;
}
void show()
{
cout<<hours<<":"<<mins;
}
};
int main()
{
Time t1;
int duration;
cout<<"Enter duration\n";
cin>>duration;
t1 = duration;
t1.show();
}