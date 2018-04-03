#include<iostream>
using namespace std;
int size=3;
template <class t>
class vector
{
private:
	t  *v;
public:
	vector(int m)
	{
		v = new t[m];
		for(int i=0;i<size;i++)
			v[i]=0;
	}
	void getarray()
	{
		for(int i=0;i<size;i++)
			cin>>v[i];
	}
	t operator *(vector &y)
	{
		t sum=0;
		for(int i=0;i<size;i++)
		{
			sum+=this->v[i]*y.v[i];
		}
		return sum;
	}
};
int main()
{
	vector <float>v1(size);
	vector <float>v2(size);
	cout<<"Enter first array\n";
	v1.getarray();
	cout<<"Enter second array\n";
	v2.getarray();
	cout<<v1*v2;
}