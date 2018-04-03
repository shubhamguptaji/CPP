#include<iostream>
using namespace std;
class matrice
{
int a[3][3];
public:
matrice()
{
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
a[i][j]=0;
}
void getdata()
{
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
cin>>a[i][j];
}
matrice operator +(matrice b)
{
matrice c;
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
c.a[i][j]=a[i][j]+b.a[i][j];
return c;
}
matrice operator -(matrice b)
{
matrice c;
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
c.a[i][j]=a[i][j]-b.a[i][j];
return c;
}
matrice operator *(matrice b)
{
matrice c;
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
{
for(int k=0;k<3;k++)
c.a[i][j]+=a[i][k]*b.a[k][j];
}
return c;
}
void display()
{
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
}
};
int main()
{
matrice m1,m2,m3;
cout<<"Enter first matrice"<<endl;
m1.getdata();
cout<<"Enter second matrice"<<endl;
m2.getdata();
m3=m1+m2;
cout<<"Sum of two matrices is: "<<endl;
m3.display();
m3=m1-m2;
cout<<"Difference of two matrices is: "<<endl;
m3.display();
m3=m1*m2;
cout<<"Multiplication of two matrices is: "<<endl;
m3.display();
return 0;
}