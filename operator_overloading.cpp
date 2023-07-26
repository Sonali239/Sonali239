#include<iostream>
using namespace std;
//using member function
/*class test
{
	private:
		int x;
	public:
	void getdata()
	{
		cout<<"enter a number:"<<endl;
		cin>>x;
	}
	void putdata()
	{
		cout<<"your value:"<<x<<endl;
	}
	void operator-()
	{
		x=-x;
	}
		
};
int main()
{
	test T;
	T.getdata();
	T.putdata();
	-T;
	T.putdata();
}*/
//USING FRIEND FUNCTION
/*class test
{
	private:
		int x;
	public:
	void getdata()
	{
		cout<<"enter a number:"<<endl;
		cin>>x;
	}
	void putdata()
	{
		cout<<"your value:"<<x<<endl;
	}
	friend void operator-(test & z);
};
	void operator-(test & z)
	{
		z.x=-z.x;
	}
		

int main()
{
	test T;
	T.getdata();
	T.putdata();
	-T;
	T.putdata();
}*/
//INCREMENT(POST)
/*class test
{
	private:
		int x;
	public:
	void getdata()
	{
		cout<<"enter a number:"<<endl;
		cin>>x;
	}
	void putdata()
	{
		cout<<"your value:"<<x<<endl;
	}
	friend void operator++(test & z);
};
	void operator++(test & z)
	{
		z.x=z.x+1;
	}
		

int main()
{
	test T;
	T.getdata();
	T.putdata();
	++T;
	T.putdata();
}*/
//Decrement
/*class test
{
	private:
		int x;
	public:
	void getdata()
	{
		cout<<"enter a number:"<<endl;
		cin>>x;
	}
	void putdata()
	{
		cout<<"your value:"<<x<<endl;
	}
	friend void operator--(test & z);
};
	void operator--(test & z)
	{
		--z.x;
	}
		

int main()
{
	test T;
	T.getdata();
	T.putdata();
	--T;
	T.putdata();
}*/
//Binary
//memory function
//addition operator overloading
/*class test
{
	private:
		int x;
	public:
	void getdata()
	{
		cout<<"enter number:"<<endl;
		cin>>x;
	}
	void putdata()
	{
		cout<<"value:"<<x<<endl;
	}
	test operator+(test & z)
	{
		test t;
		t.x=x+z.x;
		return t;
	}	
};
int main()
{
	test a,b,c;
	a.getdata();
	b.getdata();
	a.putdata();
	b.putdata();
	c=a+b;
	c.putdata();
}*/
//substraction
/*class test
{
	private:
		int x;
	public:
	void getdata()
	{
		cout<<"enter number:"<<endl;
		cin>>x;
	}
	void putdata()
	{
		cout<<"value:"<<x<<endl;
	}
	test operator-(test & z)
	{
		test t;
		t.x=x-z.x;
		return t;
	}	
};
int main()
{
	test a,b,c;
	a.getdata();
	b.getdata();
	a.putdata();
	b.putdata();
	c=a-b;
	c.putdata();
}*/
class test
{
	private:
		int x;
	public:
	void getdata()
	{
		cout<<"enter number:"<<endl;
		cin>>x;
	}
	void putdata()
	{
		cout<<"value:"<<x<<endl;
	}
	test operator*(test & z)
	{
		test t;
		t.x=x*z.x;
		return t;
	}	
};
int main()
{
	test a,b,c;
	a.getdata();
	b.getdata();
	a.putdata();
	b.putdata();
	c=a*b;
	c.putdata();
}

//using friend function
/*class test
{
	private:
		int x;
	public:
	void getdata()
	{
		cout<<"enter number:"<<endl;
		cin>>x;
	}
	void putdata()
	{
		cout<<"value:"<<x<<endl;
	}
	friend test operator+(test & y,test &z);
};
	test operator+(test & y,test & z)
	{
		test t;
		t.x=y.x+z.x;
		return t;
	}	

int main()
{
	test a,b,c;
	a.getdata();
	b.getdata();
	a.putdata();
	b.putdata();
	c=a+b;
	c.putdata();
}*/
