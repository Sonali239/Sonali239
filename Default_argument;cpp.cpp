#include <iostream>
using namespace std;
/*class test
{
	public:
		void sum(int x,int y=0,int z=0)
		{
			cout<<"sum="<<(x+y+z)<<endl;
		}
};
int main()
{
	test t;
	t.sum(10);
	t.sum(10,20);
	t.sum(10,20,30);
}
*/
class test
{
	public:
		void sum(int x=0,int y=0,int z=0)
		{
			cout<<"sum="<<(x+y+z)<<endl;
		}
		void sum(float x,float y=0,float z=0)
		{
			cout<<"sum="<<(x+y+z)<<endl;
		}
};
int main()
{
	test t;
	t.sum(10);
	t.sum(10,20);
	t.sum(10,20,30);
	t.sum(10.20f);
	t.sum(10.20f,20.10f);
	t.sum(10.20f,20.10f,30.10);

}
