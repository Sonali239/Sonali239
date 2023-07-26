import java.util.Scanner;
public class Loop
{
	public static void main(String args [])
	{
		int n,i;
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter a number");
		n=sc.nextInt();
		for(n=2;n<=5;n++)
		{
			for(i=1;i<11;i++)
		    {
			    System.out.println("Print a table:"+(n*i));
		    }
			
		}
		
		//SIMPLE FORLOOP
		/*int n,i;
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter a number");
		n=sc.nextInt();
		for(i=1;i<11;i++)
		{
			System.out.println("Print a table:"+(n*i));
		}*/
		
	}
}