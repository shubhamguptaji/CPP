#include<iostream>
using namespace std;
class employee
{
	protected:
		float basic_salary;
	public:
		virtual void getdata()
		{

		}
		virtual void display()
		{

		}

};
class salary:public employee
{
protected:
	float total_salary;
public:
	void getdata()
	{
		cin>>basic_salary;
	}
	void display()
	{
		total_salary=basic_salary;
		cout<<total_salary<<endl;
	}
};
class commission:public employee
{
protected:
	int no_of_sales;
	float sales[100],total_salary;
public:
	void getdata()
	{
		cin>>basic_salary;
		cin>>no_of_sales;
		for(int i=0;i<no_of_sales;i++)
		{
			cin>>sales[i];
		}
	}
	void display()
	{
		total_salary=basic_salary;
		for(int i=0;i<no_of_sales;i++)
			total_salary+=sales[i];
		total_salary = 0.5*total_salary;
		cout<<total_salary<<endl;
	}
};
class promotion:public employee
{
protected:
	int no_of_sales;
	float sales[100],total_salary,sum;
public:
	void getdata()
	{
		cin>>basic_salary;
		cin>>no_of_sales;
		for(int i=0;i<no_of_sales;i++)
		{
			cin>>sales[i];
		}
	}
	void display()
	{
		total_salary = basic_salary;
		total_salary+=total_salary*0.1;
		for(int i=0;i<no_of_sales;i++)
		{
			sum += sales[i];
		}
		total_salary += 0.2*sum;
		cout<<total_salary;
	}
};
int main()
{
	employee *ptr,e;
	int choice;
	cin>>choice;
	if(choice==1)
	{
		salary s;
		ptr = &s;
	}
	else if(choice==2)
	{
		commission c;
		ptr = &c;
	}
	else if(choice==3)
	{
		promotion p;
		ptr = &p;
	}
	else
	{
		cout<<"Wrong value"<<endl;
		return 0;
	}
	ptr->getdata();
	ptr->display();
	return 0;
}