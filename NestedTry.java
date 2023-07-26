public class NestedTry 
{
    public static void main(String args [])
  {
	String nm ="Sonali";
	int i;
	try
	{
		for(i=0;i<nm.length();i++)
		{
			system.out.println(nm.charAt(i));
			try
			{
				Thread.sleep(1000);
			}
			catch(InterruptedException e)
			{
			}
		}
			//closing of outer try
		catch(NullPointerException e)
		{
			system.out.println("String is null");
		}
		catch(StringIndexOutOfBoundsException e)
		{
			system.out.println("Invalid index");
		}
		catch(Exception e)
		{
			system.out.println(e);
		}
			
			
			
			
	}
}
}
