#include<iostream>
using namespace std;
class test
{
	private:
		int x;
		static int rec;
	public:
		void getdata()
		{
			cout<<"enter a number"<<endl;
			cin>>x;
			rec++;
		}
		void putdata()
		{
			cout<<"value:"<<x<<endl;
		}
		static void showrec()
		{
			cout<<"Record:"<<rec<<endl;
		}	
};
int test::rec;
int main()
{
	test a,b;
	a.getdata();
	b.getdata();
	a.putdata();
	b.putdata();
	a.showrec();
	b.showrec();
	test::showrec();
}
