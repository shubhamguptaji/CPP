#include<iostream>
using namespace std;
class class2;
class class1
{
int value1;
public:
void getvalue(int a)
{
value1=a;
}
void display()
{
cout<<value1<<endl;
}
friend void swap(class1 &,class2 &);
};
class class2
{
int value2;
public:
void getvalue(int b)
{
value2=b;
}
void display()
{
cout<<value2;
}
friend void swap(class1 &,class2 &);
};
void swap(class1 &x,class2 &y)
{
int temp=x.value1;
x.value1=y.value2;
y.value2=temp;
}
int main()
{
class1 c1;
class2 c2;
c1.getvalue(100);
c2.getvalue(200);
swap(c1,c2);
c1.display();
c2.display();
return 0;
}
