/*abstract class Vehicle
{
	public abstract int getVehicle();
}
class Car extends Vehicle
{
	public int getVehicle()
	{
		return 4;
	}
}
class Bus extends Vehicle
{
	public int getVehicle()
	{
		return 6;
	}
}
public class Test
{
	public static void main(String args[])
	{
		Car c=new Car();
		Bus b=new Bus();
		System.out.println("Wheels of car:"+c.getVehicle());
		System.out.println("Wheels of bus:"+b.getVehicle());
	}
}*/

// Loan

/*abstract class Loan
{
	public abstract double getInterestRate();
}
class GoldLoan extends Loan
{
	public double getInterestRate()
	{
		return 10.5;
	}
}
class HomeLoan extends Loan
{
	public double getInterestRate()
	{
		return 8.5;
	}
}
class Test
{
	public static void main(String args[])
	{
		GoldLoan g=new GoldLoan();
		HomeLoan h=new HomeLoan();
		System.out.println("Interest Rate of Gold Loan:"+g.getInterestRate()+"%");
		System.out.println("Interest Rate of Home Loan:"+h.getInterestRate()+"%");
	}
}*/

abstract class Fruit
{
	public abstract String Taste();
}
class Mango extends Fruit
{
	public String Taste()
	{
		return "Sweet";
	}
}
class Orange extends Fruit
{
	public String Taste()
	{
		return "Bitter";
	}
}
class Test
{
	public static void main(String args[])
	{
		Mango m=new Mango();
		Orange o=new Orange();
		Fruit f=new Fruit(); 
		System.out.println("Taste of Mango:"+m.Taste());
		System.out.println("Taste of Orange:"+o.Taste());
	}
}
