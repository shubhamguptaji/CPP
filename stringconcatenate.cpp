#include<iostream>
#include<string.h>
using namespace std;
class strings
{

public:
int length;
char * p;
strings(char *s)
{
length=strlen(s);
p=new char[length+1];
strcpy(p,s);
}
strings operator + (strings st1,strings st2)
{
strings temp;
temp.length = strlen(str1.p) + strlen(str2.p);
temp.p= new char[temp.length+1];
strcpy(temp.p, str1.p);
strcat(temp.p, str2.p);
return temp;
}
};
int main()
{
class strings st1,st2,st3;
char a[50],b[50];
cin>>a>>b;
st1(a);
st2(b);
st3=st1+st2;
}

}