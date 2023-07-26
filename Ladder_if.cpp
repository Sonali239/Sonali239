#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"marks"<<endl;
	cin>>marks;
	if(marks>500 && marks>0)
	cout<<"input invalid";
	if(marks>300)
	cout<<"first";
	if(marks>225)
	cout<<"second";
	if(marks>150)
	cout<<"third";
	if(marks>0)
	cout<<"fail";
}
