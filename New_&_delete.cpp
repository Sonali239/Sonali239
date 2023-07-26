#include <iostream>
using namespace std;
class test
{
	private:
		int *p;
	public:
		test()
		{
			p=new int;
		}
		void input()
		{
			cout<<"Enter number:"<<endl;
			cin>>*p;
		}
		void show()
		{
			cout<<"your value:"<<*p<<endl;
		}
		~test()
		{
			delete p;
			cout<<"bye";
		}			
};
int main()
{
	test t;
	t.input();
	t.show();
}
