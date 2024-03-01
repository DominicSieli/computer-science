@FunctionalInterface
interface FunctionInterface
{
	int function(int a, int b);
}

class TestClass
{
	public static int method(int a, int b, FunctionInterface functionInterface)
	{
		return functionInterface.function(a, b);
	}
}

public class LambdaExpressions
{
	public static void main(String[] args)
	{
		FunctionInterface functionInterface = (a, b) -> a + b;

		System.out.println(functionInterface.function(20, 80));

		System.out.println(TestClass.method(200, 800, (a, b) -> a + b));
	}
}