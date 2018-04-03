#include<iostream>
using namespace std;
int swap(int &x,int &y)
{
int temp=x;
x=y;
y=temp;
}
int main()
{
int a,b;
cout<<"Enter first number"<<endl;
cin>>a;
cout<<"Enter second number"<<endl;
cin>>b;
swap(a,b);
cout<<"Values after swapping are"<<endl<<a<<endl<<b;
return 0;
}