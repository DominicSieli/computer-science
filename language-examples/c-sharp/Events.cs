using System;
using System.Threading;
using System.Collections.Generic;

namespace Events
{
	public class EventData : EventArgs
	{
		public int Data {get;set;}
	}

	public class EventPublisher
	{
		public event EventHandler<EventData> EventComplete;

		public void TriggerEvent(EventData eventData)
		{
			Console.WriteLine("Event Triggered!");
			Thread.Sleep(2000);
			OnEventComplete(eventData);
		}

		protected virtual void OnEventComplete(EventData eventData)
		{
			if(EventComplete == null) return;

			EventComplete(this, new EventData(){ Data = eventData.Data});
			Console.WriteLine("Event Complete!");
		}
	}

	public class EventSubscriber1
	{
		public void OnEventComplete(object source, EventData eventData)
		{
			Console.WriteLine("EventSubscriber1: Doing stuff! Data: " + eventData.Data);
		}
	}

	public class EventSubscriber2
	{
		public void OnEventComplete(object source, EventData eventData)
		{
			Console.WriteLine("EventSubscriber2: Doing stuff! Data: " + eventData.Data);
		}
	}

	class Program
	{
		static void Main()
		{
			var eventData = new EventData();
			var eventPublisher = new EventPublisher();
			var eventSubscriber1 = new EventSubscriber1();
			var eventSubscriber2 = new EventSubscriber2();

			eventPublisher.EventComplete += eventSubscriber1.OnEventComplete;
			eventPublisher.EventComplete += eventSubscriber2.OnEventComplete;

			eventData.Data = 100;

			eventPublisher.TriggerEvent(eventData);
		}
	}
}