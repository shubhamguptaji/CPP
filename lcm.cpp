#include<iostream>
using namespace std;
int main()
{
int a,b,c=1;
cin>>a>>b;
for(int i=2;i<a || i<b;i++)
{
while(a%i==0 && b%i==0)
{
c=c*i;
a=a/i;
b/=i;
}
}

c=c*a*b;
cout<<c;
}