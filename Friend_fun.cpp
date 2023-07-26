#include<iostream>
using namespace std;
/*class test
{
	private:
		int x;
	public:
	test(int z)
	{
		x=z;
	}
	void show()
	{
		 cout<<"no."<<x<<endl;
	}
	friend void display(test t);	
};
void display(test t)
{
	t.show();
	cout<<"date="<<t.x;
}
int main()
{
	test m(18);
	display(m);
}*/
class test2;
class test1
{

	private:
		int x;
	public:
	test1(int z)
	{
		x=z;
	}
	friend void max(test1 t1,test2 t2);
};
class test2
{
	private:
		int x;
	public:
	test2(int z)
	{
		x=z;
	}
	friend void max(test1 t1,test2 t2);	
};
void max(test1 t1,test2 t2)
{
	if(t1.x>t2.x)
	cout<<t1.x;
	else
	cout<<t2.x;
}
int main()
{
	test1 a(18);
	test2 b(21);
	max(a,b);
	
}

