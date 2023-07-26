#include<iostream>
using namespace std;
class test
{
	private:
		int x;
	public:
	void input(int x)
	{
		this x=x;
	}
	void show()
	{
		cout<<"your data:"<<x;
	}	
};
int main()
{
	test t;
	t.input(18);
	t.show();
}
