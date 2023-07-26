#include<iostream>
using namespace std;

class test
{
	public:
		virtual void show();
};
void test::show()
{
	cout<<"hello";
}
class vir:public test
{
	public:
		void show()
		{
			cout<<"bye";
		}
};
int main()
{
	vir t;
	t.show();
}
