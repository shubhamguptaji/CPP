#include<iostream>
using namespace std;
class account
{
public:
char name[50];
int acc,type;
float balance;
void getdata()
{
cout<<"Enter your name"<<endl;
cin>>name;
cout<<"Enter account number"<<endl;
cin>>acc;
cout<<"Enter account type(1 for savings, 2 for current)"<<endl;
cin>>type;
cout<<"Enter balance"<<endl;
cin>>balance;
}
void deposit()
{
float amount;
cout<<"Enter amount to be deposited"<<endl;
cin>>amount;
balance +=amount;
}
void withdrawl()
{
float amount;
cout<<"Enter the amount you want to withdraw"<<endl;
cin>>amount;
if(amount<balance+1000)
{
balance -=amount;
}
else
{
cout<<"Not sufficient balance"<<endl;
}
}
void display()
{
cout<<"name is:"<<name<<endl;
cout<<"account no. is"<<acc<<endl;
if(type==1)
cout<<"account type is savings"<<endl;
else
cout<<"account type is current"<<endl;
cout<<"Balance is"<<balance<<endl;
}
};
class savings: public account
{
public:
void interest()
{
if(type==1)
{
balance = balance + (balance*6)/100;
cout<<"balance after interest is"<<balance<<endl;
}
else
{
cout<<"you have a current account"<<endl;
}
}
};
class current: public account
{
public:
void checkbook()
{
if(type==2)
{
cout<<"you are provided with the facility of checkbook"<<endl;
}
else
cout<<"you have a savings account"<<endl;
}
};
int main()
{
account a;
savings s;
a.getdata();
a.deposit();
a.display();
a.withdrawl();
a.display();

s.interest();
current c;
c.checkbook();
}