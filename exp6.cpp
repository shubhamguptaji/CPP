#include <iostream>
#include<string.h>
using namespace std;
static int count=0;
class data
{
    public:
    char name[50];
    data(char *a)
    {
        strcpy(name,a);        
    }
    void show()
    {
        count++;
        cout<<"Data "<<count<<"="<<name<<endl;
    }
    void compare(data &d)
    {
        int a=strcmp(d.name,name);
        if(a==0)
            cout<<"Both Objects have same text"<<endl;
        else
            cout<<"Both Objects have different text"<<endl;
    }
    ~data()
    {
        cout<<"Release memory allocated to "<<name<<endl;
    }
};
int main()
{
char str[50],str1[50];
cout<<"Enter first String"<<endl;
cin>>str;
cout<<"Enter second String"<<endl;
cin>>str1;
data d1(str);
data d2(str1);
d1.show();
d2.show();
d1.compare(d2);
return 0;
}