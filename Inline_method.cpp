#include <iostream>
using namespace std;
class test
/*{
	private:
		int x,y;
	public:
	inline void input()
	{
		cout<<"enter a number:"<<endl;
		cin>>x>>y;
	}
	inline void show()
	{
		cout<<"your data:"<<x+y;
	}
		
};
int main()
{
	test t;
	t.input();
	t.show();
}*/
class test
{
	private:
		int x,y;
	public:
	void input();
	void show();		
};

inline void test::input()
	{
		cout<<"enter a number:"<<endl;
		cin>>x>>y;
	}
inline void test::show()
	{
		cout<<"your data:"<<x+y;
	}

int main()
{
	test t;
	t.input();
	t.show();
}
