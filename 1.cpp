#include<iostream>
using namespace std;
class find_prime
{
	protected:
	int lb,ub;
//STUDENT CODE HERE
public:
void get()
{
cin>>lb>>ub;
}
};
class der_prime:public find_prime
{
public:
int prime(int a)
{
int flag=0;
if(a<2)
return 0;
else if(a==2)
return 1;
else
{
for(int i=2;i<a;i++)
{
if(a%i==0)
{
flag=1;
break;
}
}
if(flag==1)
return 0;
else
return 1;
}
void detect_prime()
{
int a[100],j=0,b[10]=0,k;
for(int i=lb;i<ub;i++)
{
if(prime(i))
{
a[j]=i;
j++;
}
}
for(int i=0;i<j;i++)
{
while(a[i]>0)
{
k=a[i]%10;
a[k]++;
}
}
for(int i=0;i<j;i++)
cout<<a[i]<<"  ";
}


int main()
{
	 static der_prime d1;
	d1.get(); //function in base class to enter lower bound(lb) and upper bound values(ub)  
	d1.detect_prime(); // this function is responible for logic building in derived class(der_prime)
	d1.print_();//print the desired output in derived class
	return 0;
}
