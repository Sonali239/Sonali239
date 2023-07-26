import java.io.*;
class IllegalAgeException extends Exception
{
  IllegalAgeException(String msg)
  {
    super(msg);
	//caling constructor of super class
  }
}
class Person
{
	int age;
	DataInputStream ds=new DataInputStream(System.in);
	void getInput()throws IOException,IllegalAgeException
	{
		System.out.println("Enter age of person:");
		age=Integer.parseInt(ds.readLine());
		if(age<18)
		{
			IllegalAgeException e = new IllegalAgeException("Age is not eligible to vote");
			throw e;
			//throw new IllegalAgexception("Age is not eligible to vote");
			
		}
		
	}
	void validateage()
	{
		if(age>=18)
		{
			System.out.println("Age is eligible for voting");
		}
	}
	public static void main(String args[])
	{
		Person obj=new Person();
		try
		{
			obj.getInput();
			obj.validateage();
			
		}
		catch(IllegalAgeException e)
		{
			System.out.println(e);
		}
		catch(IOException e)
		{}
		catch(NumberFormatException e)
		{
			System.out.println("Invalid input");
		}
	}
	
}