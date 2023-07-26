import java.util.ListIterator;
import java.util.Vector;
public class Vector
{
public static void main(String[] args)
{
Vector<> obj = new Vector<>();
double dobj1 = new double(77.5);
float obj2 = new float(68.1);
int obj3 = new int(52);
String obj4 = new String("sonali");
System.out.println("Size of Vector is: " +obj.size());
obj.add(dobj1);
obj.add(obj2);
obj.add(obj3);
obj.add(obj4);
System.out.println("\nVector after adding the objects: " +obj);
System.out.println("Size of Vector after adding objects: "+obj.size());
obj.remove(dobj1);
obj.remove(dobj3);
System.out.println("\nVector after removing theobjects: " + obj);
System.out.println("Size of Vector after removingobjects: " +obj.size());
System.out.println("\nThe final Vector: ");
ListIterator i = obj.listIterator();
while(i.hasNext())
{
System.out.println(i.next());
}
}
}
