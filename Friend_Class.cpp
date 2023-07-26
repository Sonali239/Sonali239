#include <iostream>
using namespace std;
class A
{
	
	private:
	int prv;
	protected:
	int pro;
	public:
	int pub;
	A()
	{
			prv=10;
			pro=30;
			pub=20;
			
	}
	friend class B;
};

class B
{
	public:
	void show(A &z)
	{
		cout<<z.pub<<endl;
		cout<<z.prv<<endl;
		cout<<z.pro<<endl;
	}
};
int main()
{
	A n;
	B m;
	m.show(n);
}
