#include<iostream>

using namespace std;
void val(int p, int r, int t=2)
{
int a=(p*r*t)/100;
cout<<a;
}
int main()
{
val(1000,2);
return 0;
}