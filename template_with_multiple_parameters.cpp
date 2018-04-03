#include<iostream>
using namespace std;
template<class t1, class t2>
class sample
{
	t1 a;
	t2 b;
public:
	sample(t1 x, t2 y)
	{
		a=x;
		b=y;
	}
	void show()
	{
		cout<<a<<b<<endl;
	}
};
main()
{
	sample <int,float>s1(7,4.5);
	s1.show();
	sample<int,char>s2(10,'a');
	s2.show();
}
