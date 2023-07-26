#include <iostream>
using namespace std;
/*class B
{
	public:
		virtual void show()
		{
			cout<<"hello";
		}
};
class D:public B
{
	public:
		void disp()
		{
			cout<<"hai";
		}
};
int main()
{
	D t;
	t.disp();
}*/

class B
{
	public:
		virtual void show()
		{
			cout<<"hello";
		}
};
class D:public B
{
	public:
		void disp()
		{
			cout<<"hai";
		}
};
int main()
{
	B*p;
	B z;
	p=&z;
	p -> show();
}
