#include<iostream>
#include<string.h>
using namespace std;
class strings
{
char str[100];
public:
strings()
{
}
void read()
{
cin>>str;
}
void operator +(strings a)
{
strings c;
int len=strlen(str);
strcpy(c.str,str);
strcat(c.str,a.str);
cout<<"Concatenated string is: "<<c.str<<endl;
}
void operator ==(strings a)
{
if(strcmp(str,a.str)==0)
cout<<"Both strings are equal"<<endl;
else
cout<<"Both strings are unequal"<<endl;
}
void operator >(strings a)
{
if(strcmp(str,a.str)<0)
cout<<"String 1 is smaller than String 2"<<endl;
else
cout<<"String 2 is smaller than String 1"<<endl;
}
void operator <(strings a)
{
if(strcmp(str,a.str)>0)
cout<<"String 1 is Greater than String 2"<<endl;
else
cout<<"String 2 is Greater than String 1"<<endl;
}
};
int main()
{
strings x,y;
cout<<"Enter First String"<<endl;
x.read();
cout<<"Enter second string"<<endl;
y.read();
x+y;
x==y;
x<y;
x>y;
return 0;
}
