#include<iostream>
using namespace std;
class item
{
private:
int number;
float cost;
public:
void getdata(int a, float b)
{
number=a;
cost=b;
}
void display();
};
void item::display()
{
cout<<"number is"<<number<<endl;
cout<<"cost is"<<cost<<endl;
}
int main()
{

item chair,table;
chair.getdata(1,5000);
chair.display();
table.getdata(2,3000);
table.display();

}