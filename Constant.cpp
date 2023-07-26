#include<iostream>
using namespace std;
/*class test
{
	public:
	const int x=12;
	 void show()
	{
	   cout<<"value of x"<<x;	
	   //cout<<++x; 
	   //this part generate error
	}
	
	
};
int main()
{
	test t;
	t.show();
	
}
*/
const class A
{
	public:
		virtual void show()
		{
			cout<<"bye";
		}
};
class D:public B
{
	public:
		void display()
		{
			cout<<"hello";
		}
};
int main()
{
	D d;
	d.display();
}
