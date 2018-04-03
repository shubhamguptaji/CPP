#include<iostream>
using namespace std;
class one
{
int a,b;
public:
void getdata(int x,int y)
{
a=x;
b=y;
}
void display()
{
cout<<"value of a is "<<a<<endl;
cout<<"value of b is "<<b<<endl;
}
friend void swapvalue(int ,int );
};
void swapvalue(int x,int y)
{
int temp=x;
x=y;
y=temp;
cout<<"value of a during function call"<<x<<endl;
cout<<"value of b during function call"<<y<<endl;
}
int main()
{
one s1;
s1.getdata(10,20);
display();
swapvalue(10,20);
display();
cout<<endl;

}




