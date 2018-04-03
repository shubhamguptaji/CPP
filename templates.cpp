#include<iostream>
using namespace std;
int size=3;
class vector
{
private:
	int  *v;
public:
	vector(int m)
	{
		v = new int[m];
		for(int i=0;i<size;i++)
			v[i]=0;
	}
	void getarray()
	{
		for(int i=0;i<size;i++)
			cin>>v[i];
	}
	int operator *(vector &y)
	{
		int sum=0;
		for(int i=0;i<size;i++)
		{
			sum+=this->v[i]*y.v[i];
		}
		return sum;
	}
};
int main()
{
	vector v1(size);
	vector v2(size);
	cout<<"Enter first array\n";
	v1.getarray();
	cout<<"Enter second array\n";
	v2.getarray();
	cout<<v1*v2;
}