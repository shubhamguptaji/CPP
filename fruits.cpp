#include<iostream>
using namespace std;
class fruit
{
public:
virtual void taste()=0;
void show()
{
cout<<"I am a fruit\n";
}
};
class mango : public fruit
{
public:
void taste()
{
cout<<"Mango is sweet\n";
}
};
class orange: public fruit
{
public:
void taste()
{
cout<<"Orange is sour\n";
}
void color()
{
cout<<"Orange is orangish\n";
}
};
main()
{
fruit *f;
mango m;
orange o;
f=&m;
f->taste();
f=&o;
f->taste();
}
