#include<iostream>
using namespace std;
class class1
{
int a[3][3];
public:
void getmatrix()
{
cout<<"enter the elements"<<endl;
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
cin>>a[i][j];
}
void display()
{
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
cout<<a[i][j]<<" ";
cout<<"\n";
}
};
friend class1 transpose(class1);
};
class1 transpose(class1 m)
{
class1 c2;
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
c2.a[i][j]=m.a[j][i];
return(c2);
}
int main()
{
class1 c1,c3;
c1.getmatrix();
c1.display();
c3=transpose(c1);
c3.display();
}