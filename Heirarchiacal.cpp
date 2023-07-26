#include <iostream>
using namespace std;
class Employee
{
	protected:
		string name;
		int id;
		string dpt;
	public:
		void in()
		{
			cout<<"Enter name, id and department:";
			cin>>name>>id>>dpt;
		}
		void out()
		{
			cout<<"Name\t::"<<name<<endl;
			cout<<"ID\t::"<<id<<endl;
			cout<<"Deoartment\t::"<<dpt<<endl;
		}
};
class Health :public Employee
{
	protected:
		float ht,wt;
	public:
		void input()
		{
			cout<<"Enter height and weight:";
			cin>>ht>>wt;
		}
		void output()
		{
			out();
			cout<<"Height\t::"<<ht<<endl;
			cout<<"Weight\t::"<<wt<<endl;
		}
};
class Salary : public Employee
{
	protected:
		float salary;
	public:
		void sIn()
		{
			cout<<"Enter salary:";
			cin>>salary;
		}
		void sOut()
		{
			out();
			cout<<"Salary\t::"<<salary<<endl;
		}
};
int main()
{
	Health h;
	h.in();
	h.input();
	Salary s;
	s.in();
	s.sIn();
	cout<<"Detail 1"<<endl;
	h.output();
	cout<<"Detail 2"<<endl;
	s.sOut();
}
