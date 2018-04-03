#include<iostream>
using namespace std;
int a,b;
void swap(int x,int y)
{
a=y;
b=x;
}
int main()
{
cout<<"Enter first number"<<endl;
cin>>a;
cout<<"Enter second number"<<endl;
cin>>b;
swap(a,b);
cout<<"Values after swapping are"<<endl<<a<<endl<<b<<endl;
return 0;
}