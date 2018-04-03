#include<iostream>
#include<string.h>
using namespace std;
class height
{
int year,age,a;
float h,htcm;
char name[100];
public:
void person_data()
{
cout<<"Enter name"<<endl;
cin>>name;
cout<<"Enter height"<<endl;
cin>>h;
cout<<"Enter year of birth"<<endl;
cin>>a;
}
void cal_age(int year)
{
age=year-a;
}
void high()
{
htcm=h*100;
}
void show()
{
cout<<"Approximate age of a person: "<<age<<endl;
cout<<"Age in cms: "<<htcm<<endl;
}
};
int main()
{
height h1;
h1.person_data();
h1.cal_age(2018);
h1.high();
h1.show();
return 0;
}