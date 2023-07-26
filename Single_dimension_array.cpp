//                                              EXAMPLE OF SINGLE DIMENSION ARRAY
/*SUM OF FIVE NUMBERS
#include<iostream>
using namespace std;
int main(
{
	const int size=5;
	int a[size],i,s=0;
	cout<<"enter "<<size<<" numbers:"<<endl;
	for(i=0;i<size;i++)
	cin>>a[i];
	for(i=0;i<size;i++)
		s=s+a[i];
	cout<<"Sum="<<s;	
}
*/
#include<iostream>
#define size 10
using namespace std;
int main()
/*USING MACRO
{
	int i,n[size],s=0;
	cout<<"enter 5 numbers:"<<endl;
	for(i=0;i<=size;i++)
	cin>>n[i];
	for(i=0;i<=size;i++)
	s=s+n[i];
	cout<<"sum="<<s;
}
*/
/* INPUT 5 NUMBER USING REVERSE METHOD
{
	int i,n[size];
	cout<<"enter 5 numbers:"<<endl;
	for(i=0;i<size;i++)
	cin>>n[i];
	for(i=size-1;i>=0;i--)
	cout<<"\n"<<n[i];
}
*/
/*INPUT 10 NUMBERS AND PRINT EVEN NUMBER
{
	int n[size],i;
	cout<<"enter 10 numbers:"<<endl;
	for(i=1;i<size;i++)
	cin>>n[i];
	for(i=1;i<size;i++)
	if(i%2==0)
	cout<<"\n"<<n[i];
}
*/
{
	int n[size],i;
	cout<<"enter 10 numbers:"<<endl;
	for(i=0;i<size;i++)
	cin>>n[i];
	for(i=0;i<size;i++)
	if(i%2==0)
	cout<<"\n"<<n[i];
}
	

	
	
	

