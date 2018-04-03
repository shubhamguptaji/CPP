#include<iostream>
void swap(int a,int b)
{
int c=a;
a=b;
b=c;
printf("values after swapping are%d %d",a,b);
}
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d %d",&a,&b);
swap(a,b);
}