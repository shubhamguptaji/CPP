#include<iostream>
#include<string.h>
using namespace std;
int rollno;
char name[30],course[20];
float marks[3];
class student
{
public:
student(int rno, char *n,  char *c)
{
rollno = rno;
strcpy(name,n);
strcpy(course,c);
}
};
class marks
{
public:
marks(float a,float b,float c)
{
marks[0]=a;
marks[1]=b;
marks[2]=c;
}
float total()
{
float total=marks[0]+marks[1]+marks[2];
return total;
}
};
class result: public marks,public student
{
public:
float mark=total();
void display()
{
cout<<name<<endl;
cout<<rollno<<endl<<mark<<endl;
cout<<course<<endl;
}
};
int main()
{
result r;

student s(34, 'shubham', 'oops' );
marks m(36,37,38);
r.display();
}