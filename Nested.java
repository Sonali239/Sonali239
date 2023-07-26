public  class Nested

{
	public static void main(String args [])
	{
	
	   String nm ="Sonali";
	   int i;
	    try
	    {
		    for(i=0;i<nm.length();i++)
		    {
				
			    System.out.println(nm.charAt(i));
			    try
			    {
					
				    Thread.sleep(1000);
			    }
			    catch(InterruptedException e)
			    {}
			    
		    }
	    }
	    catch(NullPointerException e)
	    {
		    System.out.println("String is null");
	    }
	    catch(StringIndexOutOfBoundsException e)
	    {
		    System.out.println("Invalid index");
	    }
	    catch(Exception e)
	    {
		    System.out.println(e);
	    }
	}
}	
			
			
			


	   
	
	