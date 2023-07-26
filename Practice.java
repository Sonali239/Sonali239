import java.util.Scanner;

public class Practice
{
	public static void main(String args[])
	{
		/*Scanner sc = new Scanner(System.in);
		int a,b,add,mult,div,sub;
		try
		{
			System.out.println("Enter two number:");
	        a=sc.nextInt();
		    b=sc.nextInt();
			add=a+b;
			sub=a-b;
			mult=a*b;
			div=a/b;
			System.out.println("Addition:\n"+add);
			System.out.println("Substraction:\n"+sub);
			System.out.println(":Multiplication\n"+mult);
			System.out.println("Division:\n"+div);
		}
		catch(ArithmeticException e)
		{
			System.out.println("Divided by zero");
		}
		catch(NumberFormatException e)
		{
			System.out.println("Input invalid");
		}*/
		// Outer loop.
outer: for(int i = 1; i < 3; i++)
{ 
System.out.println("i: " +i);
// Inner loop. 
int j = 1;
while(j < 3)
{
System.out.println("j: " +j);
int x = i + j;
if(x > 2)
break outer;
j++;
}
}
System.out.println("Jumping out of both labelled loops");
	}
}