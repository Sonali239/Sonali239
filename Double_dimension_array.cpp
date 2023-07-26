#include<iostream>
#define row 3
#define col 3
using namespace std;
int main()
{
	int r,c;
	int a[row][col];
	int b[row][col];
	int z[row][col];
	cout<<"enter row and column of 1st value :"<<endl;
	for(r=0;r<row;r++)
	for(c=0;c<col;c++)
	cin>>a[r][c];
	cout<<"enter row and column of 2nd value:"<<endl;
	for(r=0;r<row;r++)
	for(c=0;c<col;c++)
	cin>>b[r][c];
	for(r=0;r<row;r++)
	for(c=0;c<col;c++)
	z[r][c]=a[r][c]+b[r][c];
	for(r=0;r<row;r++)
	{
		for(c=0;c<col;c++)
		cout<<"\t"<<z[r][c];
		cout<<"\n";
	}	
}


