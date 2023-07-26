import java.util.*;
/*public class Array1

{
	public static void main(String args[])
	{
	int i,sum=0;
	Scanner sc = new Scanner(System.in);
	System.out.println("Input 10 number from users:");
	int Revision[]=new int[10];
	for(i=0;i<Revision.length;i++)
	{
		Revision[i]=sc.nextInt();
    }
	
	for(i=0;i<Revision.length;i++)
	{
		sum=sum+Revision[i];
		System.out.println(Revision[i]);
	}
	System.out.println("Total sum value is:"+sum);
	System.out.println("total length value:"+Revision.length);
	
	}
}*/
/*public class Array1
{
        int i,r,c,j,sum=0,avg;
	    Scanner sc =new Scanner(System.in);
		void input()
		{
			System.out.println("enter row size:");
		    r=sc.nextInt();
			System.out.println("enter column size:");
		    c=sc.nextInt();	
		}
		void output()
		{
			int Array1[][]=new int[r][c];
		    System.out.println("enter numbers:");
			for(j=0;j<r;j++)
			{	
			    for(i=0;i<c;i++)
		        {
			        Array1[j][i]=sc.nextInt();
		        }
			}
		    System.out.println("Array are:");
			for(j=0;j<r;j++)
			{
		        for(i=0;i<c;i++)
		        {
			       System.out.print(Array1[j][i]+" ");
				   
				   sum=sum+Array1[j][i];
				   avg=sum/(r*c);
				   System.out.println(Array1[j][i]+" ");
				   System.out.println("value of sum:"+sum+"\n");
				   System.out.println("value of avg:"+avg);
		        }
			}
		}
		public static void main(String args[])
		{
			Array1 obj=new Array1();
			obj.input();
			obj.output();
		}
}		
*/
public class Array1

{
	public static void main(String args[])
	{
		int a[][][]=new int[5][3][2];
		int i,j,k,sum=0;
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter five matrix:");
		for(i=0;i<5;i++)
		{
			System.out.println("enter value of matrix:"+(i+1));
			for(j=0;j<3;j++)
			{
				for(k=0;k<2;k++)
				{
					a[i][j][k]=sc.nextInt();
					sum=sum+a[i][j][k];
					//System.out.println(a[i][j][k]+" ");
				}
				
			}
			System.out.println("sum value:"+sum+" ");
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<3;j++)
			{
				for(k=0;k<2;k++)
				{
					System.out.print(a[i][j][k]+" ");
					
				}
			}
		}
	}
}