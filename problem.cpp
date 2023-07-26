#include<iostream>
using namespace std;
//Q.1
/*class emp {
public:
    int e_no;
    char name[20];


    void in() 
	{
        cout << "Enter the employee number:";
        cin>>e_no;
        cout << "Enter the employee name:";
        cin>>name;
    }
};

class salary : public emp
{
    float bp, hra, da, pf, tp;
public:

    void in1() {
        cout << "Enter the basic pay:";
        cin>>bp;
        cout << "Enter the Humen Resource Allowance:";
        cin>>hra;
        cout << "Enter the Profitablity Fund:";
        cin>>pf;
    }

    void calculate() 
	{
        tp = bp + hra-pf;
    }

    void out() 
	{
        cout << e_no << "\t" << name << "\t"<< "\t" << bp << "\t" << hra << "\t" << "\t" << pf << "\t" << tp << "\n";
    }
};

int main() {
    int i, n;
    char ch;
    salary s[10];
    cout << "Enter the number of employee:";
    cin>>n;
    for (i = 0; i < n; i++) {
        s[i].in();
        s[i].in1();
        s[i].calculate();
    }
    cout << "\ne_no \t e_name\t bp \t hra \t da \t pf \t np \n";
    for (i = 0; i < n; i++)
    {
    	s[i].out();	
	}
}
*/
class student
{
	public:
		int rollno;
        char name[10];
};
class Fees:public student
{
	protected:
		int fees;
	public:
			  
	void Disp()
	{
		cout<<"Fee Receipt:"<<"\n";
		cout<<"Roll No: ";
		cin>>rollno;
		cout<<"Name: ";
		cin>>name;
		cout<<"Fee:";
		cin>>fees;
	}
};
class Result: public Fees,public student
{

public:
	void generateReceipt()
	{
		Disp();
		float marks;
		char grade;
		cout<<"enter marks:";
		cin>>marks;
		
	
		if(marks>=300 && marks<500)
		{
			grade = 'A';
		}
		else if(marks>=250 && marks<300)
		{
			grade = 'B';
		}
		else if(marks>=150 && marks<250)
		{
			grade = 'C';
		}
		else if(marks>=0 && marks<150)
		{
			grade = 'D';
		}
		else{
			grade = 'F';
		}
		cout<<grade;	
	}
	void Disp1()
	{
		cout<<"\nrollno:"<<rollno;
		cout<<"\nname:"<<name;
		cout<<"\nfees"<<fee<<endl;
		
	}
};
int main()
{
	Result obj;
	obj.Disp1();
	obj.generateReceipt();
	
}





	




	/*void in() 
	{
        cout << "Enter the student name:";
        cin>>name;
        cout << "Enter the student roll_no:";
        cin>>roll_no;
        cout<<"enter amount of fees:";
        cin>>fees;
    }
	void out()
	{
		cout<<name<<"\n"<<roll_no<<"\n"<<fees;
	}
};
class Result:public student,public Fees
{
	protected:
		float marks;
	    char grade[10];
	public:		
	void display()

		{
			cout<<"enter total marks:";
			cin>>marks;
			cout<<"enter grade:";
			cin>>grade;
		}*		
};
int main()
{
	Result obj;
	obj.in();
	obj.out();
	obj.display();
	
}*/		
	


        
