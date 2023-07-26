#include<iostream>
using namespace std;
class test
{
	/*private:
		int x;*/
	public:
		int x;
		void input();
		void show();
};
void test::input()
{
	cout<<"enter a number"<<endl;
	cin>>x;
}
void test::show()
{
	cout<<"your data"<<x;
}
int main()
{
	test t;
	t.input();
	t.show();
//	cout<<t.x;
//it give error because x is private data it can't be accessible;
}
