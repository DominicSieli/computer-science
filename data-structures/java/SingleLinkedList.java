class SingleLinkedList<T>
{
    private T defaultValue;
    private int size = 0;
    private SingleLinkNode<T> head = null;
    private SingleLinkNode<T> tail = null;

    public SingleLinkedList() {}

    public SingleLinkedList(T[] list)
    {
        for(T data : list)
        {
            insertTail(data);
        }
    }

    public int getSize()
    {
        return this.size;
    }

    public boolean isEmpty()
    {
        return this.head == null;
    }

    public T getHead()
    {
        if(this.head != null) return this.head.getData();

        return defaultValue;
    }

    public T getTail()
    {
        if(this.tail != null) return this.tail.getData();

        return defaultValue;
    }

    public void insertHead(T data)
    {
        this.size++;
        SingleLinkNode<T> node = new SingleLinkNode<T>(data, this.head);
        this.head = node;

        if(this.size == 1) this.tail = this.head;
    }

    public void insertTail(T data)
    {
        if(this.tail == null) { insertHead(data); return; }

        this.size++;
        SingleLinkNode<T> node = new SingleLinkNode<T>(data);
        this.tail.setNext(node);
        this.tail = node;
    }

    public void delete(T data)
    {
        SingleLinkNode<T> node = this.head;

        while(node != null)
        {
            if(node == this.head && node.getData() == data) { deleteHead(); node = this.head; }

            if(node.getNext() != null && node.getNext().getData() == data)
            {
                node.setNext(node.getNext().getNext());
            }

            node = node.getNext();
        }
    }

    public void deleteHead()
    {
        if(this.head == null) return;

        this.size--;
        SingleLinkNode<T> node = this.head;
        this.head = this.head.getNext();
        node.setNext(null);

        if(this.head == null) this.tail = null;
    }

    public void deleteTail()
    {
        if(this.tail == null) return;
        if(this.head == this.head) { deleteHead(); return; }

        SingleLinkNode<T> node = this.head;

        while(node.getNext() != tail)
        {
            node = node.getNext();
        }

        this.size--;
        this.tail = node;
        this.tail.setNext(null);
    }

    public void clear()
    {
        while(this.head != null)
        {
            deleteHead();
        }

        this.head = null;
        this.tail = null;
    }

    public int contains(T data)
    {
        if(this.head == null) return 0;

        SingleLinkNode<T> node = this.head;
        int instances = 0;

        while(node != null)
        {
            if(node.getData() == data) instances++;

            node = node.getNext();
        }

        return instances;
    }

    public void reverse()
    {
        if(this.size < 2) return;

        SingleLinkNode<T> current = this.head;
        SingleLinkNode<T> next = this.head.getNext();
        SingleLinkNode<T> previous = null;

        while(current != null)
        {
            next = current.getNext();
            current.setNext(previous);
            previous = current;
            current = next;
        }

        SingleLinkNode<T> head = this.head;
        SingleLinkNode<T> tail = this.tail;
        this.head = tail;
        this.tail = head;
    }
}