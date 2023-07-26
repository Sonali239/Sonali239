import java.util.Scanner;
public class One_dim
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int a[]=new int[10];
		int i,sum=0,avg;
		System.out.println("Enter 10 numbers:");
		for(i=0;i<a.length;i++)
		{
			a[i]=sc.nextInt();
		}
		for(i=0;i<a.length;i++)
		{
			sum=sum+a[i];
		}
		avg=sum/a.length;
		System.out.println("Total sum value:"+sum);
		System.out.println("Average:"+avg);
		
	}
}