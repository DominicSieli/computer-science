import java.util.*;

class Variadic
{
	public static int[] method(int... parameters)
	{
		return parameters;
	}
}

class VariadicMethod
{
	public static void main(String[] args)
	{
		int[] array = Variadic.method(1,2,3,4,5,6,7,8,9,10);

		for(int x : array) System.out.println(x);
	}
}