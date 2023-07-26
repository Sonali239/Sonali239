#include<iostream>
#define size 5
using namespace std;
int main()
{
	int n[size],i,j,t;
	cout<<"enter number:"<<endl;
	for(i=0;i<size;i++)
	cin>>n[i];
	for(i=0,j=size-1;i<j;i++,j--)
	{
		t=n[i];
		n[i]=n[j];
		n[j]=t;
	}
	for(i=0;i<size;i++)
	cout<<"\t"<<n[i];
}

/*TO STORE ARRAY REVERSE INTO ANOTHER ARRAY
{
	int a[size],b[size],i,j=0;
	cout<<"enter number:"<<endl;
	for(i=0;i<size;i++)
	cin>>a[i];
	for(i=size-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0;i<size;i++)
	cout<<"\t"<<b[i];	
}
*/

/*STORE REVERSE THE SAME ARRAY BY WHILE LOOP
{
	int n[size],i,j,t;
	cout<<"enter number:"<<endl;
	for(i=0;i<size;i++)
	cin>>n[i];
	i=0;
	j=size-1;
	while(i<j)
	{
		t=n[i];
		n[i]=n[j];
		n[j]=t;
		i++;
		j--;
	}
	for(i=0;i<size;i++)
	cout<<"\t"<<n[i];
}
*/
	

