#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout("PRIYA");
	int roll;
	string name;
	char ch;
	do
	{
		cout<<"enter roll & name";
		cin>>roll>>name;
		fout<<roll<<name;
		cout<<"more(y/n):";
		cin>>ch;
		
	}
	while(ch=='y');
	fout.close();
}
