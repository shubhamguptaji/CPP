#include<iostream>
#include<string.h>
using namespace std;
int size;
class bill
{
		protected:
			int items[10];
			float price[10];
		public:
			virtual void total()=0;
			virtual void display()=0;
};
/*bill::bill(int items[],float price[],int size)
{
	size=size;
	for(int i=0;i<size;i++)
	{
		items[i]=items[i];
		price[i]=price[i];
	}
}*/
class Cheque:public bill
{
protected:
	int no;
	int sum;
	char name[30];
	float p[30];
	int it[30];
public:
	Cheque(int items[],float price[],int num,char n[],int s)
	{
		size=s;
		strcpy(name,n);
		no=num;
			for(int i=0;i<size;i++)
	{
		it[i]=items[i];
		p[i]=price[i];
	}


	}
	void total()
	{
		for(int i=0;i<size;i++)
		{
			sum += p[i];
		}
	}
	void display()
	{
		cout<<"payed by cheque"<<endl;
		cout<<"cheque number:"<<no<<endl;
		cout<<"name of bank:"<<name<<endl;
		cout<<"total="<<sum<<endl;
	}

};
class Cash:public bill
{
protected:
	int sum=0;
	int it[30];
	float p[30];
public:
	Cash(int items[],float price[],int s)
	{
		size=s;
			for(int i=0;i<size;i++)
	{
		it[i]=items[i];
		p[i]=price[i];
	}

	}
	void total()
	{
		for(int i=0;i<size;i++)
		{
			sum += p[i];
		}
	}
	void display()
	{
		cout<<"payed by cash"<<endl;
		cout<<"total="<<sum<<endl;
	}
};
//STUDENT CODE HERE 
int main()
{	 
	int s;
	cin>>s;
	int item[s];
	for (int i=0;i<s;i++)
		cin>>item[i];
	float price[s];
	for(int i=0;i<s;i++)
		cin>>price[i];	
	int option;
	cin>>option;
	if(option==1)
	{ 	
		int c_no;
		char n[30];
		cin>>c_no;
		cin.ignore();
		cin.getline(n,30);
		Cheque Ch(item,price,c_no,n,s);
		Ch.total();
		Ch.display();
	}
	else if(option==2)
	{
		Cash C(item,price,s);
		C.total();
		C.display();
	}
    return 0;
}
