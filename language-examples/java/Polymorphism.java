import java.util.*;

class BaseClass
{
	public void Method()
	{}
}

class SubClass1 extends BaseClass
{
	@Override
	public void Method()
	{
		System.out.println("SubClass1 Method Called");
	}
}

class SubClass2 extends BaseClass
{
	@Override
	public void Method()
	{
		System.out.println("SubClass2 Method Called");
	}
}

class SubClass3 extends BaseClass
{
	@Override
	public void Method()
	{
		System.out.println("SubClass3 Method Called");
	}
}

class SubClass4 extends BaseClass
{
	@Override
	public void Method()
	{
		System.out.println("SubClass4 Method Called");
	}
}

class Polymorphism
{
	public static void main(String[] args)
	{
		List<BaseClass> list = new ArrayList<BaseClass>();

		list.add(new SubClass1());
		list.add(new SubClass2());
		list.add(new SubClass3());
		list.add(new SubClass4());

		for(BaseClass subClass : list)
		{
			subClass.Method();
		}
	}
}