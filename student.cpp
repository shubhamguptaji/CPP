#include<iostream>
using namespace std;
char name[5][30];
float marks[5];
class student
{
public:
void getdata()
{

cout<<"Enter 5 students data\n";
for(int i=0;i<5;i++)
{
cout<<"Enter name\n";
cin>>name[i];
cout<<"Enter marks\n";
cin>>marks[i];
}
}
virtual void display()=0;
};
class topper: public student
{
public:
int j;
float max;

void display()
{

for(int i=0;i<5;i++)
{
if(max<marks[i])
{
max=marks[i];
j=i;
}
}
cout<<name[j]<<endl<<marks[j]<<endl;
}
};
main()
{
student *s;
topper t;
s=&t;
s->getdata();
s->display();

}
