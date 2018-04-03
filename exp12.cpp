#include<iostream>
using namespace std;
class base
{
protected:
	int a,b,sum,diff,prod;
public:
	virtual void choose()
	{}
	void getdata()
	{
		cin>>a>>b;
	}
	void addition()
	{
		sum=a+b;
		cout<<sum<<endl;
	}
	void difference()
	{
		diff=a-b;
		cout<<diff<<endl;
	}
	void product()
	{
		prod=a*b;
		cout<<prod<<endl;
	}
	virtual void display()
	{

	}
};
class derived:public base
{
protected:
	int choice;
public:
	void choose()
	{
		cin>>choice;
	}
	void display()
	{
		if(choice==1)
		{
			addition();
		}
		else if(choice==2)
		{
			difference();
		}
		else if(choice==3)
		{
			product();
		}
	}
};
int main()
{
	base *ptr;
	derived d;
	ptr=&d;
	ptr->choose();
	ptr->getdata();
	ptr->addition();
	ptr->difference();
	ptr->product();
	ptr->display();
	return 0;
}