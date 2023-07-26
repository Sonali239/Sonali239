#include<iostream>
using namespace std;
int main ()
//BIGGER AMONG THREE NUMBERS
{
	int a,b,c;
	cout<<"enter three numbers:"<<endl;
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>b && a>c)
		cout<<"bigger is a:"<<a;
		else
		cout<<"bigger is c:"<<c;
	}
	if(b>a)
	{
		if(b>a && b>c)
		cout<<"bigger is b:"<<b;
		else
		cout<<"bigger is c:"<<c;
	}
}
