#include<iostream>
using namespace std;
void divide(int x, int y, int z)
{
if(x-y!=0)
{
cout<<"Result:"<<z/(x-y);
}
else
{
throw(x-y);
}
}
int main()
{
try
{
divide(10, 20, 30);
divide(10,10,20);
}
catch(int i)
{
cout<<"Exception caught\n";
}
cout<<"End";
}