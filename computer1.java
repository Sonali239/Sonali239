package mypack;
public class computer1 
{
        computer1()
        {
            System.out.println("Constructor of computer class");
    
        }
        void Computer1_method()
        {
            System.out.println("powervgone! Shutdown your PC soon");
    
        }
        public static void main(String[] args)
        {
            computer1 c = new computer1();
            Laptop l = new  Laptop();
            c.Computer1_method();
            l.Laptop_method();
        }  
}
    class Laptop
    {
        Laptop()
        {
            System.out.println("Constructor of Laptopclass");
        }
        void Laptop_method()
        {
            System.out.println("99% battery available");
        }
    }
    

