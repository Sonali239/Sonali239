import java.io.*;
class Mythrows
{
	public static void main(String args[])throws IOException,InterruptedException
	{
		DataInputStream ds = new DataInputStream(System.in);
		String nm;
		System.out.println("Enter your name:");
		nm=ds.readLine();
		System.out.println("All chars in reverse order:");
		for(int i=nm.length()-1;i>=0;i--)
		{
			System.out.println(nm.charAt(i));
			Thread.sleep(1000);
		}
	}
}
	