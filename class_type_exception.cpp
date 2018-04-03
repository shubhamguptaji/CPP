#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class Error
{
int err_code;
char *err_des;
public:
Error(int c, char *s)
{
err_code = c;
err_des = new char[strlen(s)];
strcpy(err_des, s);
}
void display()
{
cout<<"Error code:"<<err_code<<endl;
cout<<"Message:"<<err_des<<endl;
}
};
main()
{
try
{
cout<<"Enter any key to call exception\n";
getch();
throw Error(99, "Test exception");
}
catch(Error e)
{
cout<<"Caught Exception\n";
e.display();
}
}