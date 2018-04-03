#include<iostream>
using namespace std;
class balagurswamy
{
public:
virtual void display()=0;
};
class c:public balagurswamy
{
public:
void display()
{
cout<<"C textbook\n";
}
};
class cpp:public balagurswamy
{
public:
void display()
{
cout<<"C++ textbook"<<endl;
}
};
main()
{
balagurswamy *b[2];
c c1;
cpp c2;
b[0]=&c1;
b[1]=&c2;
b[1]->display();
b[0]->display();
}