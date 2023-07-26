#include<iostream>
using namespace std;
//SINGLE LEVEL INHERITANCE
/*class A
{
	protected:
		int a;
};
class B:public A
{
	protected:
		int b;
	public:
	inline void in();
	inline void out();	
};
void B::in()
{
	cout<<"\n enter two numbers:"<<endl;
	cin>>a>>b;
}
void B ::out()
{
	cout<<"\n Sum="<<a+b;
}
int main()
{
	B obj;
	obj.in();
	obj.out();
}
*/

//RECTANGLE
/*class A
{
	protected:
		int l;
};
class B:public A
{
	protected:
		int b;
	public:
	inline void in();
	inline void out();	
};
void B::in()
{
	cout<<"\n enter length & breadth of rectangle:"<<endl;
	cin>>l>>b;
}
void B ::out()
{
	cout<<"\n Area="<<l*b;
	cout<<"\n Perimeter="<<2*(l+b);
}
int main()
{
	B obj;
	obj.in();
	obj.out();
}
*/
//MULTILEVEL INHERITANCE
//SUM OF TWO NUMBERS
/*class A
{
	protected:
		int a;
};
class B:public A
{
	protected:
		int b;
};
class C:public B
{
   protected:
   	int c;
   	
    public:
		void in()
		{
		    cout<<"Enter two number:"<<endl;
			cin>>a>>b;	
        }
		void out()
		{
		    c=a+b;
	        cout<<"Sum of two numbers:"<<c;
	    }
};

int main()
{
	C obj;
	obj.in();
	obj.out();
}*/
//RECTANGLE
/*class A
{
	protected:
		int l;
};
class B:public A
{
	protected:
		int b;
};
class C:public B
{
   protected:
   	int c;
   	int s;
   	
    public:
		void in()
		{
		   cout<<"Enter two number:"<<endl;
	       cin>>l>>b;	
     	}
		void out()
		{
		   c=l*b;
           s=2*(l+b);
           cout<<"Area of rectangle:"<<c;
           cout<<"\nPerimeter of rectangle:"<<s;
       }
};
int main()
{
	C obj;
	obj.in();
	obj.out();
}*/
//MULTIPLE INHERITANCE
/*class student
{
	protected:
	char name[10];
	int id;
};
class physical
{
	protected:
	float ht,wt;
	
};
class C:public student,physical
{
	protected:
		char course[10];
	public:
		void in()
		{
			cout<<"enter your name and id:"<<endl;
			cin>>name>>id;
			cout<<"enter your ht & wt:"<<endl;
			cin>>ht>>wt;
			cout<<"enter course name:"<<endl;
			cin>>course;
		}
		void out()
		{
			cout<<"\nname:"<<name;
			cout<<"\nid:"<<id;
			cout<<"\nheight"<<ht;
			cout<<"\nweight"<<wt;
			cout<<"\ncourse"<<course<<endl;
		}
	
};
int main()
{
	C obj;
	obj.in();
	obj.out();
	
}
*/
/*class Employee
{
	protected:
	char Emp_name[10];
	int Emp_no.;
};
class Manager
{
	protected:

};
*/

//MULTIPLE INHERITANCE
/*class Acadmeic
{
	protected:
		char Name[10];
		int marks;
};
class Physical
{
	protected:
		int wt,ht;
		char bg[10];
};
class PIS:public Acadmeic,public Physical
{
	protected:
		int mob_no;
	    char address[10];
	public:
		void in()
	    {
	    	
		    cout<<"enter your name:"<<endl;
		    cin>>Name;
		    cout<<"enter your 10th & 12th marks:"<<endl;
		    cin>>marks>>marks;
		    cout<<"enter your height:"<<endl;
		    cin>>ht;
		    cout<<"enter your weight:"<<endl;
	     	cin>>wt;
	    	cout<<"enter your bloodgroup:"<<endl;
	    	cin>>bg;
		    cout<<"enter your mobile no:"<<endl;
		    cin>>mob_no;
		    cout<<"enter your address:"<<endl;
		    cin>>address;
	    }
		void out()
		{
			cout<<"\nname:"<<"\t"<<Name;
			cout<<"\nmarks:"<<"\t"<<marks;
			cout<<"\nmarks:"<<"\t"<<marks;
			cout<<"\nheight:"<<"\t"<<ht;
			cout<<"\nweight:"<<"\t"<<wt;
			cout<<"\nbloodgroup:"<<"\t"<<bg;
			cout<<"\nmob_no:"<<"\t"<<mob_no;
			cout<<"\nadd:"<<"\t"<<address;
		}		
	    
	
};
		int main()
		{
			PIS obj;
			obj.in();
			obj.out();
		}
*/
//HEIRARCHIAL INHERITANCE
class A
{
	protected:
	int a;
};
class B:public A
{
	protected:
	int b;
};	
class c:public B
{
	protected:
		int c;
	public:
	void in()
	{
		cout<<"enter two number:";
		cin>>a>>b;	
	}
	void out()
	{
		c=a+b;
		cout<<"sum="<<a+b;
	}
		
};
int main()
{
	c obj ;
	obj.in();
	obj.out();
}


