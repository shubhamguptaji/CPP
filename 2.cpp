#include<iostream>
#include<string.h>
using namespace std;
class employee
{
protected:
int id;
char name[20];
char des[20];
public:
void get_emp_data();
void show_emp_data();
};
void employee:: get_emp_data(void)
{
	cin>>id;
	gets(name);
	gets(des);
}
void employee::show_emp_data(void)
{
	cout<<id<<endl<<name<<endl<<des<<endl;
}
class contract:public employee
{
private:
	int hours,wages,sal;
public:
	void get_cont_data()
	{
			cin>>id>>name>>des;
		cin>>hours>>wages;
	}
	void show_cont_data()
	{
		sal = hours*wages;
		show_emp_data();
		cout<<sal<<endl;
	}
};
class permanent:public employee
{
	private:
		int basic,hra,da,ta,salary;
	public:
		void get_per_data()
		{
			cin>>basic>>hra>>ta;
		}
		void show_per_data()
		{
			da = basic/10;
			salary = hra+basic+ta+da;
			cout<<salary<<endl;
		}
};
//STUDENT CODE HERE
int main()
{
contract c;
c.get_cont_data();
permanent p;
p.get_per_data();
c.show_cont_data();
p.show_per_data();
return 0;
}
