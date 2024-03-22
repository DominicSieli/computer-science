import java.util.*;

interface ICallback
{
	void callbackMethod();
}

class Subscriber implements ICallback
{
	String message = "";

	Subscriber(String message)
	{
		this.message = message;
	}

	@Override
	public void callbackMethod()
	{
		System.out.println(message);
	}
}

class Service
{
	List<Subscriber> subscribers = new ArrayList<Subscriber>();

	void subscribe(Subscriber subscriber)
	{
		subscribers.add(subscriber);
	}

	void callback()
	{
		for(Subscriber subscriber : subscribers)
		{
			subscriber.callbackMethod();
		}
	}
}

public class CallbackMethods
{
	public static void main(String[] args)
	{
		Service service = new Service();
		Subscriber subscriber1 = new Subscriber("subscriber1 method called");
		Subscriber subscriber2 = new Subscriber("subscriber2 method called");
		Subscriber subscriber3 = new Subscriber("subscriber3 method called");
		Subscriber subscriber4 = new Subscriber("subscriber4 method called");

		service.subscribe(subscriber1);
		service.subscribe(subscriber2);
		service.subscribe(subscriber3);
		service.subscribe(subscriber4);

		service.callback();
	}
}