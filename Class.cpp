#include <iostream>

using namespace std;
/*class test
{
	private:
		int n;
	public:
	void input()
	{
		cout<<"enter number:"<<endl;
		cin>>n;
	}
	void show()
	{
		cout<<"your data="<<n;
	}
		
};
int main()
{
	test t;
	t.input();
	t.show();
}*/
/*class sonali
{
	private:
		int n;
	public:
	void input()
	{
		cout<<"enter number:"<<endl;
		cin>>n;
	}
	void show()
	{
		cout<<"your data="<<n;
	}		
};
int main()
{
	sonali o; 
	o.input();
	o.show();
}*/
class test
{
	private:
		int x;
	public:
	void input (int n)
	{
		x=n;
	}
	
	void show()
	{
		cout<<"your data:"<<x;		
	}

};
int main()
{
	test t;
	t.input(15);
	t.show();
}
