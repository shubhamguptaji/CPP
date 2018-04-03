#include<iostream>
using namespace std;
int ub,lb;
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
}
int main()
{
int a[100],j=0,b[10]={0},k;
cin>>lb>>ub;

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
b[k]++;
a[i]/=10;
}
}
int max=0,l;
for(int i=0;i<10;i++)
{
if(max<b[i])
{
max=b[i];
k=i;
}
}

cout<<b[k];
}