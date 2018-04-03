#include<iostream>
using namespace std;
class student
{
protected:
int roll;
public:
void get_roll(int x)
{
roll=x;
}
void put_roll()
{
cout<<"Roll no."<<roll<<endl;
}
};
class test:virtual public student
{
protected:
float marks1,marks2;
public:
void get_marks(float x,float y)
{
marks1=x;
marks2=y;
}
void put_marks()
{
cout<<"Marks1 = "<<marks1<<endl;
cout<<"Marks2 = "<<marks2<<endl;
}
};
class sports:virtual public student
{
protected:
float score;
public:
void get_score(float a)
{
score=a;
}
void put_score()
{
cout<<"score="<<score<<endl;
}
};
class result:virtual public test,virtual public sports
{
float total;
public:
void display()
{
total=marks1+marks2+score;
put_roll();
put_marks();
put_score();
cout<<"Total="<<total<<endl;
}
};
int main()
{
result r1;
r1.get_roll(1001);
r1.get_marks(40.,60.5);
r1.get_score(5.5);
r1.display();
}