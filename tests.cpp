#include<iostream>
using namespace std;
class test
{
int a;
public:
test()
{
a=20;
}
void display()
{
cout<<"a"<<a;
}
virtual ~test()
{
cout<<"object t destroyed";
}
};
int main()
{
test t;
t.display();
return 0;
}
