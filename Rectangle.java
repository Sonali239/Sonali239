import java.util.Scanner;
import java.lang
class NegativeLengthException extends Exception
{
    NegativeLengthException(String msg)
	{
	    super(msg);
	}
	
}
class NegativeBreadthException extends Exception
{
    NegativeBreadthException(String msg)
	{
	    super(msg);
	}
}
class Rectangle
{
    int l,b,area,peri;
	InputStreamReader isr = new InputStreamReader(System.in);
	//read inf. fron console and transfer to buffer and read data to buffer we use buffer reader
	BufferedReader br = new BufferedReader(isr);
	//BufferedReader br = new BufferedReader (new InoutStreamReader(System.in));
	void getInput() throws IOException,NegativeLengthException,NegativeBreadthException
	{
		System.out.println("Enter lenghth and breadth:");
		l=Integer.parseInt(br.readLine());
		b=Integer.parseInt(br.readLine());
		if(l<0)
		throw new NegativeLengthException("Length is negative");
	    if(b<0)
		throw new  NegativeBreadthException("Breadth is negative");	
	}
	void findArea()
	{
		area=l+b;
	}
	void findPeri()
	{
		peri=2*(l+b);
	}
	void showResult()
	{
		System.out.println("Area of rectangle:"+area+"\n Perimeter of rectangle:"+peri);
	}
	public static void main(String args[])
	{
		Rectangle obj = new Rectangle();
		
		try
		{
			obj.getInput();
			obj.findArea();
			obj.findPeri();
			obj.showResult();
		}
		catch(NumberFormatException e)
		{
			System.out.println("Invalid input");
		}
		catch(NegativeLengthException e)
		{
			System.out.println(e);
			
		}
		catch(NegativeBreadthException e)
		{
			System.out.println(e);
		}
		catch(IOException e)
		{
			
		}
		finally
		{
			System.out.println("Thanku");
		}
	}
}

/*import java.io.*;
class NegativeLengthException extends Exception
{
	NegativeLengthException(String msg)
	{
		super(msg);
	}
}
class NegativeBreadthException extends Exception
{
	NegativeBreadthException(String msg)
	{
		super(msg);
	}
}
class Rectangle
{
	int l,b,area,peri;
	InputStreamReader isr = new InputStreamReader(System.in);
	BufferedReader br = new BufferedReader(isr);
	//BufferedReader br=new BufferedReader(new InputStreamReader(System.in);
	void getInput()throws IOException,NegativeLengthException,NegativeBreadthException
	{
		System.out.println("Enter length&breadth");
		l=Integer.parseInt(br.readLine());
		b=Integer.parseInt(br.readLine());
		if(l<0)
			throw new NegativeLengthException("length is negative");
		if(b<0)
			throw new NegativeBreadthException("breadth is negative");
	}
	void findarea()
	{
		area=l*b;
	}
	void findperi()
	{
		peri=2*(l+b);
	}
	void showResult()
	{
		System.out.println("Area of rectangle="+area+"\n perimeter of rectangle="+peri);
	}
	public static void main(String args[])
	{
		Rectangle obj= new Rectangle();
		try
		{
			obj.getInput();
			obj.findarea();
			obj.findperi();
			obj.showResult();
		}
		catch(NumberFormatException e)
		{
			System.out.println("invalid input");
		}
		catch(NegativeLengthException e)
		{
			System.out.println(e);
		}
		catch(NegativeBreadthException e)
		{
			System.out.println(e);
		}
		catch(IOException e)
		{}
	}
}
*/