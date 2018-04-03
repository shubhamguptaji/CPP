#include<iostream>
using namespace std;
class department
{
protected:
	int choice,age;
	float salary;
	char name[100];
public:
	void getdata()
	{
		cin>>choice>>name>>age>>salary;
	}
	virtual void display()=0;
};
class clerk:public department
{
public:
	void display()
	{
		cout<<"Dept: ";
		if(choice==1)
		{
			cout<<"CSE"<<endl;
		}
		else if(choice==2)
			cout<<"ECE"<<endl;
		else if(choice==3)
			cout<<"ME"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Salary: "<<salary<<endl;
	}
};
int main()
{
	department *ptr;
	clerk c;
	ptr = &c;
	ptr->getdata();
	ptr->display();
	return 0;
}