namespace DataStructures
{
	public class DoubleLinkList<T>
	{
		private class Node
		{
			public T data;
			public Node next;
			public Node previous;

			public Node(T data, Node next = null, Node previous = null)
			{
				this.data = data;
				this.next = next;
				this.previous = previous;
			}
		}

		private long count = 0;
		private Node head = null;
		private Node tail = null;

		public DoubleLinkList()
		{}

		public DoubleLinkList(T[] list)
		{
			foreach(var data in list)
			{
				InsertTail(data);
			}
		}

		~DoubleLinkList()
		{
			DeleteList();
		}

		public bool Empty()
		{
			return head == null;
		}

		public long Count()
		{
			return count;
		}

		public void DeleteList()
		{
			while(head != null)
			{
				DeleteHead();
			}
		}

		public T Head()
		{
			if(head == null) return default(T);

			return head.data;
		}

		public T Tail()
		{
			if(tail == null) return default(T);

			return tail.data;
		}

		public void Print()
		{
			Node node = head;

			System.Console.Write("null<-");

			while(node != null)
			{
				System.Console.Write("{0}-", node.data);
				node = node.next;
			}

			System.Console.Write(">null");
		}

		public long Contains(T data)
		{
			if(head == null) return 0;

			Node node = head;
			long instances = 0;

			while(node != null)
			{
				if(node.data.Equals(data)) instances++;

				node = node.next;
			}

			return instances;
		}

		public void DeleteHead()
		{
			if(head == null) return;

			count--;
			Node node = head;
			head = head.next;
			node.next = null;

			if(head == null) tail = null;
		}

		public void DeleteTail()
		{
			if(tail == null) return;
			if(tail == head) {DeleteHead(); return;}

			count--;
			tail = tail.previous;
			tail.next.next = null;
			tail.next.previous = null;
		}

		public void Remove(T data)
		{
			Node node = head;

			while(node != null)
			{
				if(head.data.Equals(data)) {DeleteHead(); node = head;}

				if(node.data.Equals(data))
				{
					if(node.next != null) node.next.previous = node.previous;
					if(node.previous != null) node.previous.next = node.next;
				}

				node = node.next;
			}
		}

		public void InsertHead(T data)
		{
			count++;
			Node node = new Node(data, head, null);

			if(head != null) head.previous = node;

			head = node;

			if(count == 1) tail = head;
		}

		public void InsertTail(T data)
		{
			if(head == null) {InsertHead(data); return;}

			count++;
			Node node = new Node(data, null, tail);
			tail.next = node;
			tail = node;
		}

		public void Reverse()
		{
			if(head == null) return;

			Node left = head;
			Node right = tail;

			for(int i = 0; i < count / 2; i++)
			{
				T leftData = left.data;
				T rightData = right.data;
				left.data = rightData;
				right.data = leftData;
				left = left.next;
				right = right.previous;
			}
		}
	}
}