#include <iostream>
using namespace std;
class test
{
	public:
void check_prime();
};
void test::check_prime()

{
	int n,i,count=0;
	cout<<"enter any number:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==2)
	{
		cout<<"prime number";
	}
	else
	cout<<"not prime number";
}

int main()
{
	test t;
	t.check_prime ();
}

