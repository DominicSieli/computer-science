import java.util.Scanner;

class Strings
{
	public static void main(String args[])
	{
		System.out.print("Name: ");
		Scanner scanner = new Scanner(System.in);
		String name = scanner.nextLine();
		System.out.println("Hello " + name);
		scanner.close();
	}
}