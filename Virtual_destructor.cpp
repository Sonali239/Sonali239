#include<iostream>
using namespace std;
class base
{
	public:
	virtual~base()
	{
		cout<<"virtual destructor"<<endl;
	}
};
class derived:public base
{
	public:
	~derived()
	{
		cout<<"derived destructor"<<endl;
	}
};
int main()
{
	base *ptr;
	ptr=new derived();
	delete(ptr);
}
