import java.util.Scanner;
class InsufficientFundException extends Exception
{
    InsufficientFundException(String msg)
	{
	    super(msg);
	}
	
}
class AccountException
{
	int ac_no,bal;
	char holder_name[10],ac_type;
	Scanner sc = new Scanner(System.in);
	void getinput()
	{
		System.out.println("Enter account number:");
		System.out.println("Enter holder_name:");
	}
}
	