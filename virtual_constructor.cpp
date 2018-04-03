#include<iostream>
using namespace std;
class alpha
{
int x;
public:
alpha(int i)
{
x=i;
}
void show_x()
{
cout<<"x="<<x<<endl;
}
};
class beta
{
float y;
public:
beta(float j)
{
y=j;
}
void show_y()
{
cout<<"y="<<y;
}
};
class gamma:public beta, public alpha
{
int m,n;
public:
gamma(int x, float y, int z):alpha(x), beta(y)
{
m=x;
n=z;
}
void show_mn()
{
cout<<"m="<<m<<" n="<<n;
}
};
main()
{
gamma g(5,10.4,3);
g.show_x();
g.show_y();
g.show_mn();
}