#include<iostream>
using namespace std;
//Default constructor
/*class test
{
	public:
	int x;
	public:
	test()
	{
		x=12;	
    }
    void show()
    {
    	cout<<"value of x"<<x;
	}
};
int main()
{
	test t;
	t.show();
}
*/
//Parameterized constructor
/*class test
{
	public:
		int x;
	public:
	test(int z)
	{
		x=z;
	}
	void show()
	{
		cout<<"value of x"<<x;
	}	
};
int main()
{
	test t(12);
	t.show();
}
*/
//Copy Constructor
/*class test
{
	public:
		int x;
	public:
		test(int z)
		{
			x=z;
		}
		test(test &m)
		{
			x=m.x;
		}
		void show()
		{
			cout<<"value of x:"<<x;
		}
};
int main()
{
	test t(12);
	test t1(t);
	t.show();
	t1.show();
}
*/
//Destructor
/*class test
{
	public:
		int x;
	public:
	test(int z)
	{
		x=z;
	}
	void show()
	{
		cout<<"value of x"<<x<<endl;
	}
	~test()
	{
		cout<<"bye";
	}	
};
int main()
{
	test t(12);
	t.show();
}*/
//Friend fuction
/*class test
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
		cout<<"value of x"<<x<<endl;
	}	
friend void display(test t);
};
void display(test t)
{
	t.show();
	cout<<"value"<<t.x;
}
int main()
{
	test m(14);
	display(m);
}
*/
/*class test
{
	private:
		int x;
	static int rec;
	public:
	void getdata()
	{
		rec++;
		cout<<"enter a no."<<endl;
		cin>>x;
	}
	void putdata()
	{
		cout<<"value of x:"<<x<<endl;
	}
	void showrec()
	{
		cout<<"record:"<<rec<<endl;
	}
};int test::rec;
int main()
{
	test a;
	test b;
	a.getdata();
	b.getdata();
	a.putdata();
	b.putdata();
	a.showrec();
	b.showrec();
}*/

class test
{
	private:
		int x;
		static int rec;
	public:
		void getdata()
		{
			cout<<"enter a number:"<<endl;
			cin>>x;
		}
		void putdata()
		{
			cout<<"value:"<<x<<endl;
		}
		void showrec()
		{
			cout<<"record"<<rec;
		}
	};
