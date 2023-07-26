#include<iostream>
using namespace std;
class sum
{
	public:
		sum(int x,int y=0)
		{
			cout<<"sum:"<<x+y<<endl;
		}
		sum(float x,float y=0)
		{
			cout<<"sum:"<<x+y<<endl;
		}
};
int main()
{
	sum p(50);
	sum (10,20);
	sum (10.20f,20.10f);
}
