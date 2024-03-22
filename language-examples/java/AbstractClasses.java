import java.util.*;

abstract class AbstractClass
{
	public abstract void method();
}

class SubClass1 extends AbstractClass
{
	@Override
	public void method()
	{
		System.out.println("SubClass1 Method Called");
	}
}

class SubClass2 extends AbstractClass
{
	@Override
	public void method()
	{
		System.out.println("SubClass2 Method Called");
	}
}

class SubClass3 extends AbstractClass
{
	@Override
	public void method()
	{
		System.out.println("SubClass3 Method Called");
	}
}

class SubClass4 extends AbstractClass
{
	@Override
	public void method()
	{
		System.out.println("SubClass4 Method Called");
	}
}

public class AbstractClasses
{
	public static void main(String[] args)
	{
		List<AbstractClass> list = new ArrayList<AbstractClass>();

		list.add(new SubClass1());
		list.add(new SubClass2());
		list.add(new SubClass3());
		list.add(new SubClass4());

		for(AbstractClass subClass : list)
		{
			subClass.method();
		}
	}
}