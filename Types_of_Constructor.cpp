#include<iostream>
using namespace std;
//DEFAULT CONSTRUCTOR
/*class test
{
	public:
		int x;
	public:
	test()
	{
		x=12;
	}
	void show()
	{
		cout<<"numbers:"<<x<<endl;
	}	
};
int main()
{
	test t;
	t.show();
}*/
//PARAMETRIZED CONSTRUCTOR
class test
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
			cout<<"numbers:"<<x<<endl;
		}		
};
int main()
{
	test t(15);
	t.show();
	
}
//COPY CONSTRUCTOR
/*class test
{
	private:
		int x;
		public:
			test(int z)
			{
				x=z;
			}
			test(test & m)
			{
				x=m.x;
			}
			void show()
			{
				cout<<"Value="<<x<<endl;
			}
};
int main()
{
	test a(18);
	test b(a);
	a.show();
	b.show();
}*/
