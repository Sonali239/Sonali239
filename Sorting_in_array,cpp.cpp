#include<iostream>
#define size 10
using namespace std;
int main()
/*SELECTION SORT
{
	int n[size],i,j,t;
	cout<<"enter a number:"<<endl;
	for(i=0;i<size;i++)
	cin>>n[i];
	for(i=0;i<size-2;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(n[i]>n[j])
			{
				t=n[i];
				n[i]=n[j];
				n[j]=t;
			}
		}
	}
	for(i=0;i<size;i++)
	cout<<"\t"<<n[i];
}
*/
{
	int n[size],i,j,t;
	cout<<"enter a number:"<<endl;
	for(i=0;i<size;i++)
	cin>>n[i];
	for(i=0;i<size-2;i++)
	{
		for(i=1;i<=size-1;i++)
		{
			for(j=0;j<size-1;j++)
			{
				if(n[j]>n[j+1])
				{
					t=n[j];
					n[j]=n[j+1];
					n[j+1]=t;
				}
			}
		}
    }
    for(i=0;i<size;i++)
	cout<<"\t"<<n[i];
}
		
