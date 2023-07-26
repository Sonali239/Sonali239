#include<iostream>
using namespace std;
class test
{
	public:
		virtual void show();
};
void test::show()
{
	cout<<"hello bihar"<<endl;
}
class derived:public test
{
	public:
		void show()
		{
			cout<<"hello chapra"<<endl;
		}
};
int main()
{
	derived d;

	d.show();
}
