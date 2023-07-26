#include<iostream>
using namespace std;
int main()
/*PRINT ANY TABLE
{
	int i,n;
	cout<<"enter a number:"<<endl;
	cin>>n;
	for(i=1;i<10;i++)
	cout<<"\n"<<i*n;
}*/
/*PRINT HELLO
{
	int i;
	for(i=1;i<5;i++)
	cout<<"\n"<<"hello";
}
*/
/*FIND EVEN NUMBER FROM 1 T0 100 NATURAL NUMBER
{
	int i,n;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(i=1;i<100;i++)
	if(i%2==0)
	cout<<"\n"<<i;

}
*/
/*PRIME AND COMPOSITE
{
	int i,n,c=0;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(i=2;i<=n/2;i++)
	if(n%i==0)
	c++;
	if(c==0)
	cout<<"prime";
	else
	cout<<"composite";
}
*/
/*FACTORIAL
{
	int i,fact=1,n;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	fact=fact*i;
	cout<<"\n"<<fact;
}*/

/*FABNOCII SERIES
{
	int i,a,b,c,t;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	cout<<"enter term value"<<endl;
	cin>>t;
	cout<<"series are"<<endl;
	cout<<a<<"\t"<<b;
	for(i=1;i<=t-2;i++)
	{
		c=a+b;
		cout<<"\t"<<c;
		a=b;
		b=c;
	}
}
*/
/* AMICABLE NUMBER
{
	int i,n1,n2,s1=0,s2=0,j;
	cout<<"enter two numbers"<<endl;
	cin>>n1>>n2;
	for(i=1;i<=n1/2;i++)
	if(n1%i==0)
	s1=s1+i;
	for(j=1;j<=n2/2;j++)
	if(n2%j==0)
	s2=s2+j;
	if(s1==n2 && s2==n1)
	cout<<"amicable";
	else
	cout<<"not amicable";
}
*/
/*PERFECT NUMBER
{
	int n,i,sum=0;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(i=1;i<=n/2;i++)
	if(n%i==0)
	sum=sum+i;
	if(sum==n)
	cout<<"perfect";
	else
	cout<<"not perfect";
}
*/
	
	
	
	
	

