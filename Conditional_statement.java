/*import java.util.*;
public class Conditional_statement
{
	
	
	public static void main(String args[])
	{
        

        int n1,n2;
		char operators;
        Scanner sc= new Scanner(System.in);
		
        System.out.println("Enter two operands :");
        n1=sc.nextInt();
        n2=sc.nextInt();
		System.out.println("Enter type of operators:");
		operators=sc.next().charAt(0);
		
		
		switch(operators)
		{
			case '+':
			System.out.println("Addition:"+(n1+n2));
			break;
			
			case '-':
			System.out.println("Addition:"+(n1-n2));
			break;
			
			case '*':
			System.out.println("Addition:"+(n1*n2));
			break;
			
			case '/':
			System.out.println("Addition:"+(n1/n2));
			break;
			
			default:
			System.out.println("input invalid");
			
			
		}
        /*int days;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter days number :");
        days=sc.nextInt();
		switch(days)
		{
			case 1:
			System.out.println("Sunday");
			break;
			
			case 2:
			System.out.println("Monday");
			break;
			
			case 3:
			System.out.println("Tuesday");
			break;
			
			case 4:
			System.out.println("Wednesday");
			break;
			
			case 5:
			System.out.println("Thrusday");
			break;
			
			case 6:
			System.out.println("Friday");
			break;
			
			case 7:
			System.out.println("Saturday");
			break;
			
			default:
			System.out.println("Incorrect day number");
			
			
		}*/
		
        //Nested if
		/*if(a>b)
        {
            
            if(a>c)
            {
                System.out.println("bigger is:"+a);
            }
            else
            System.out.println("bigger is:"+c);
            
        }
        if(b>c)
        {
            
           
           System.out.println("bigger is:"+b);
        }    
        else
			
            System.out.println("bigger is:"+c);
         */ 
        //Ladder if
        /*int marks;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter marks:");
        marks=sc.nextInt();
        if(marks>=300 && marks<=500)
            System.out.println("First");
        else if(marks>=225 && marks<=300)
            System.out.println("Second");    
        else if(marks>=150 && marks<=225)
            System.out.println("Third");
        else if(marks>0 && marks<=150)
            System.out.println("Fail");
     
        else
        System.out.println("Input invalid"); */
	    // if else
        /*int year;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter year value:");
        year=sc.nextInt();

        if(((year%4==0)&&(year%100!=0))||(year%400==0))
        System.out.println("Leap year");

        else
        System.out.println("Not Leap year");*/

         //simple if
        /*int age;
	    Scanner sc= new Scanner(System.in);
       
	    System.out.println("Enter your age:");
        age=sc.nextInt();

		if(age>=18)
		{
			System.out.println("Eligible for voting");
		}
		
			System.out.println("Not Eligible");*/
		
	}
}*/
public class Conditional_statement
{
public static void main(String[] args)
{
//Specifying month number
int month=7;
String monthString="";
//Switch statement
switch(month)
{
//case statements within the switch block
case 1: monthString= "1 - January"; break;
case 2: monthString= "2 - February"; break;
case 3: monthString= "3 - March"; break;
case 4: monthString= "4 - April"; break;
case 5: monthString= "5 - May"; break;
case 6: monthString= "6 - June"; break;
case 7: monthString= "7 - July"; break;
case 8: monthString= "8 - August"; break;
case 9: monthString= "9 - September"; break;
case 10: monthString= "10 - October"; break;
case 11: monthString= "11 - November"; break;
case 12: monthString= "12 - December"; break;
default: System.out.println("Invalid Month!");
}
//Printing month of the given number
System.out.println(monthString);
}
}
