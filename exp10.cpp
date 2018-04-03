#include<iostream>
using namespace std;
class figure
{
protected:
	float length, breadth,a;
public:
	void getdata()
	{
		cout<<"Enter length"<<endl;
		cin>>length;
		cout<<"Enter breadth"<<endl;
		cin>>breadth;
	}
	virtual void area()
	{

	}
};
class rectangle:public figure
{
public:

	void area()
	{
		a=length*breadth;
		cout<<"area of rectangle is "<<a<<endl;
	}
};
class triangle:public figure
{
public:
	void area()
	{
		a = length*breadth*0.5;
		cout<<"area of triangle is "<<a<<endl;
	}
};
int main()
{
	triangle t;
	figure *ptr,f;
	rectangle r;
	int choice;
	cin>>choice;
	if(choice==1)
	{
		ptr = &r;
	}
	else if(choice==2)
	{
		ptr = &t;
	}
	else
	{
		cout<<"wrong choice"<<endl;
		return 0;
	}
	ptr->getdata();
	ptr->area();
	return 0;
}