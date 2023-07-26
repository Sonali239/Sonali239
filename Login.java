import java.io.*;
class Login
{
	String user_name,p_word;
	DataInputStream ds =new DataInputStream(System.in);
    Login()throws IOException
	{
		System.out.println("Enter user name:");
		user_name=ds.readLine();
		System.out.println("Enter password:");
		p_word=ds.readLine();
	}	
	void validatelogin()throws InterruptedException
	{
		System.out.println("Login validating.........................");
		Thread.sleep(3000);
		if(user_name.equals("Cimage")==true && p_word.equals("aku")==true)
			System.out.println("Login success");
		else if(user_name.equals("Cimage")==false && p_word.equals("aku")==false)
			System.out.println("login failed due to both are invalid");
		else if(user_name.equals("Cimage")==false)
			System.out.println("Login failed due to invalid password");
		
	}
}
 class LoginDemo
{
	public static void main(String args[])throws IOException,InterruptedException
	{
		Login obj=new Login();
		obj.validatelogin();
	}
}