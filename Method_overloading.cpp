#include<iostream>
using namespace std;
//FUNCTION OVERLOADING
/*void sum(int x,int y)
{
	cout<<"sum="<<x+y;
}
void sum(float x,float y)
{
	cout<<"sum="<<x+y;
}
int main()
{
	sum(10,20);
	sum(10.2f,10.2f);
}
*/
class test
{
	public:
	void sum(int x,int y)
	{
	   cout<<"sum="<<x+y;
    }
    void sum(float x,float y)
    {
	   cout<<"sum="<<x+y;
    }
};
int main()
{ 
	sum(10,20);
	sum(10.2f,10.2f);
}
