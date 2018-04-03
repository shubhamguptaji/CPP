#include<iostream>
using namespace std;
void test(int x)
{
try
{
if(x==0)
throw x;
else if(x==1) throw 1.0;
else if(x==-1) throw 'x';
cout<<"End of try\n";
}
/*
catch(int i)
{
cout<<"Caught on Integer\n";
}
catch (double i)
{
cout<<"Caught  a double\n";
}
catch(char i)
{
cout<<"Caught a character\n";
}
*/
catch(...)
{
cout<<"Caught an exception\n";
}
}
main()
{
test(1);
test(0);
test(-1);
test(2);
}