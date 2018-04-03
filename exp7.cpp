#include<iostream>
using namespace std;
class counter
{
int count;
public:
counter()
{
count=0;
}
counter(int a)
{
count=a;
}
void operator ++()
{
count++;
}
void operator ++(int a)
{
count ++;
}
void operator -()
{
count=-count;
}
void show()
{
cout<<count<<endl;
}
};
int main()
{
int c;
cout<<"Enter  a number"<<endl;
cin>>c;
counter c1(c);
++c1;
c1.show();
c1++;
c1.show();
-c1;
c1.show();
return 0;
}