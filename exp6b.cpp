#include<iostream>
using namespace std;
class TIME
{
public:
int hours,mins,secs;
TIME()
{
hours=mins=secs=0;
}
void gettime()
{
cout<<"Enter hours"<<endl;
cin>>hours;
cout<<"Enter minutes"<<endl;
cin>>mins;
cout<<"Enter seconds"<<endl;
cin>>secs;
}
TIME add(TIME a)
{
TIME t;
t.hours=hours+a.hours;
t.mins=mins+a.mins;
t.secs=secs+a.secs;
if(t.secs>59)
{
t.secs-=60;
t.mins++;
}
if(t.mins>59)
{
t.mins-=60;
t.hours++;
}
return t;
}
void display()
{
cout<<"After adding two times, result is: "<<hours<<":"<<mins<<":"<<secs<<endl;
}
};
int main()
{
TIME t1,t2,t3;
t1.gettime();
t2.gettime();
t3=t1.add(t2);
t3.display();
return 0;
}