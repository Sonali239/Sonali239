import java.util.Scanner;
public class Array
{
	
	//public static void main(String args[])
	//{
		
		/*int i,n;
	    Scanner sc =new Scanner(System.in);
		
		System.out.println("enter size of element:");
		n=sc.nextInt();
		
		int Array[]=new int[n];
		
		System.out.println("enter 10 numbers:");
		for(i=0;i<n;i++)
		{
			Array[i]=sc.nextInt();
		}
		System.out.println("Array are:");
		for(i=0;i<n;i++)
		{
			System.out.print(Array[i]+"\t");
		}
		*/
		int i,n;
	    Scanner sc =new Scanner(System.in);
		void input()
		{
			System.out.println("enter size of element:");
		    n=sc.nextInt();
		    int Array[]=new int[n];
		    System.out.println("enter 10 numbers:");	
		}
		void output()
		{
			for(i=0;i<n;i++)
		    {
			   Array[i]=sc.nextInt();
		    }
		    System.out.println("Array are:");
		    for(i=0;i<n;i++)
		    {
			  System.out.print(Array[i]+"\t");
		    }
		}
		public static void main(String args[])
		{
			Array obj=new Array();
			obj.input();
			obj.output();
		}
		
		
		/*int i,j;
		String[][] Array = new String{{"elapp","apple"};{"argneo","orange"};{"agrspe","grapes"}};
        System.out.println("fruits are: "); 
        for (String[] i : Array)
        {
            for (String j : i)
            {
                System.out.println(j);
            }
        }*/

		
		
		//INPUT 10 NOS AND FIND SUM
		/*Scanner sc =new Scanner(System.in);
		int Array[]=new int[10];
		int i,sum=0,avg;
		System.out.println("enter 10 numbers:");
		for(i=0;i<Array.length;i++)
		{
			Array[i]=sc.nextInt();
			
		}
		for(i=0;i<Array.length;i++)
		{
			sum=sum+Array[i];
		}
		avg=sum/Array.length;
		System.out.println("Total sum:"+sum);
		System.out.println("Average"+avg);
		*/
		
		//Double dimension
		/*String[][] Array = new String[][]{
        {"elapp","apple"},{"argneo","orange"},{"agrspe","grapes"}}; 
	     System.out.println("Elements stored in array are: ");
        for (int i=0; i<3;i++)
        {
            for (int j=0; j<2;j++)
            {
		       System.out.print(Array[i][j]);
			   System.out.print("\t");
			}
			System.out.print("\n");
		}*/
		
		
	
	
    }//
}    


		
		
		
		
		
		

/*public class Array
{
	int i;
	public static void main(String args[])
	{
		String Array[]=new String[]{"pplea","baanan","grapes"};
		for(int i=0;i<Array.length;i++) 
        System.out.println(Array[i]);
	    System.out.println("length:"+Array.length);
	}
}*/