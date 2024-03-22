import java.util.*;

interface Interface
{
	void method();
}

class Implementation1 implements Interface
{
	public void method()
	{
		System.out.println("Implementation1 Method Called");
	}
}

class Implementation2 implements Interface
{
	public void method()
	{
		System.out.println("Implementation2 Method Called");
	}
}

class Implementation3 implements Interface
{
	public void method()
	{
		System.out.println("Implementation3 Method Called");
	}
}

class Implementation4 implements Interface
{
	public void method()
	{
		System.out.println("Implementation4 Method Called");
	}
}

public class Interfaces
{
	public static void main(String[] args)
	{
		List<Interface> list = new ArrayList<Interface>();

		list.add(new Implementation1());
		list.add(new Implementation2());
		list.add(new Implementation3());
		list.add(new Implementation4());

		for(Interface implementation : list)
		{
			implementation.method();
		}
	}
}