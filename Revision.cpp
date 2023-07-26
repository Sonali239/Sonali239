#include <iostream>
using namespace std;
/*class Acadmeic_details
{
	protected:
	char name[10];
	int Id;
	char qualification[20];
	
};
class Physical_details
{
	protected:
		int height,weight;
		char blood_group[10];
	
		
};
class Derived:public Acadmeic_details,Physical_details
{
   	public:
	void in()
    {
	cout<<"enter your name :"<<endl;
	cin>>name;
	cout<<"enter your id :"<<endl;
	cin>>Id;
	cout<<"enter your qualification details :"<<endl;
	cin>>qualification;
	cout<<"enter your height  :"<<endl;
	cin>>height;
	cout<<"enter your weight :"<<endl;
	cin>>weight;
	cout<<"enter your bloodgroup :"<<endl;
	cin>> blood_group;
	
   }
    void out()
       {
	        cout<<"\nname:"<<name;
			cout<<"\nid:"<<Id;
			cout<<"\nqualification"<<qualification;
			cout<<"\nheight"<<height;
			cout<<"\nweight"<<weight;
			cout<<"\nbloodgroup"<<blood_group;
		}
		
};
int main()
{
	Derived obj;
	obj.in();
	obj.out();
}
*/
/*class Employee
{
	protected:
	char name[10];
	int id;
	char dep;
	public:
		void in()
		{
			cout<<"enter name";
			cin>>name;0
			cout<<"enter id"<<;
			cin>>id;
			cout<<"enter dep"<<;
			cin>>dep;
		}
		void out()
		{
			cout<<name<<endl;
			cout<<id<<endl;
			cout<<dep<<endl;
			
				
		}
};
class Emp_health:public Employee
{
	protected:
		int ht,wt;
	public:
		void HW_in()
		{
		  in();
    	  cout<<"enter ht & wt";
		  cin>>ht>>wt;
	   }
	   void HW_out()
	   {
	   	out();
	   	cout<<ht<<endl;
	   	cout<<wt<<endl;
	   	
	   }
};*/

/*class Emp_Salary_record:public Employee
{
	protected:
		float salary;
		public:
			void In_salary()
			{
				in();
			   cout<<"Enter your salary: "<<endl;
			   cin>>salary;
			   
			}
			void Out_salary()
			{
				out();
				cout<<salary;
			}

};*/

/*
int main()
{
	cout<<"Details of first employee"<<endl;
	Emp_health obj1;
	obj1.HW_in();
	obj1.HW_out();
	//cout<<"Details of second employee"<<endl;
	//Emp_Salary_record obj;
	//obj.In_salary();
	//obj.Out_salary();
 
}*/
/*class test
{
	private:
		int n;
	public:
		void in()
		{
			cout<<"enter a number:"<<endl;
	        cin>>n;
	
		}
		friend void factorial(test t);
};
void factorial(test t)
{	
	int fact=1;
	int i;
	for(i=1;i<=t.n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial value:"<<fact;	
};
int main()
{
	test t;
	t.in();
	factorial (t);	
}
*/
/*class test
{
	public:
		void show()
		{
		 cout <<"this is show method!"<<endl;
        }
};

class Demo : public test 
{
	public:
 		 void display() 
		{
   			cout<< "this is display method" <<endl;
  		}
};
int main()
{
	Demo t;
	t.show();
	t.display();
}

*/
class weight
{
	int kg;
	int gm;
	public:
		void getdata();
		void putdata();
		void sum_weight(weight,weight);
};
void weight:: getdata()
{
	cout<<"Kilograms:"<<endl;
	cin>>kg;
	cout<<"Grams:"<<endl;
	cin>>gm;
}
void weight::putdata()
{
	cout<<"kilograms"<<kg<<endl;
	cout<<"grams"<<gm<<endl;
}
void weight::sum_weight(weight w1,weight w2)
{
	gm=w1.gm+w2.gm;
	kg=gm/1000;
	gm=gm%1000;
	kg+=w1.kg=+w2.kg;
}
int main()
{
	weight w1,w2,w3;
	cout<<"Enter weight in kilogram and grams:"<<endl;
	cout<<"enter weight#1" ;
	w1.getdata();
	cout<<"enter weight#1" ;
	w2.getdata();
	w3.sum_weight(w1,w2);
	cout<<"\n weight#1=";
	w1.putdata();
	cout<<"\n weight#2=";
	w2.putdata();
	cout<<"Total weight= ";
	w3.putdata();
	
}
