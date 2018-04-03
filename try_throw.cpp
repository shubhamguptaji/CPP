#include<iostream>
using namespace std;
main()
{
int x,y,z;
cin>>x>>y>>z;
try
{
if(x-y!=0)
{
cout<<"Result :"<<z/(x-y);
}
else
throw(x-y);
}
catch(int i)
{
cout<<"Exception Caught\n";
}
cout<<"end";
}