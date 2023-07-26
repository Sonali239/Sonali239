#include<iostream>
using namespace std;
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
			cout<<"value="<<x<<endl;
		}
		~test()
		{
			cout<<"Bye";
		}
};
int main()
{
	test t(15);
	t.show();
}
