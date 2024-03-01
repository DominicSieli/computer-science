import java.util.Scanner;

class Strings
{
	public static void main(String args[])
	{
		System.out.print("Name: ");
		Scanner input = new Scanner(System.in);
		String name = input.nextLine();
		System.out.println("Hello " + name);
	}
}