public class Queue<T>
{
    private int size = 0;
    private T defaultValue;
    private SingleLinkNode<T> back = null;
    private SingleLinkNode<T> front = null;

    public Queue() {}

    public void enqueue(T data)
    {
        this.size++;
        SingleLinkNode<T> node = new SingleLinkNode<T>(data);

        if(this.back == null || this.front == null) { this.back = node; this.front = node; }
        else { this.back.setNext(node); this.back = node; }
    }

    public void dequeue()
    {
        if(this.front == null) return;

        this.size--;
        SingleLinkNode<T> node = this.front;
        this.front = this.front.getNext();
        node.setNext(null);

        if(this.front == null) this.back = null;
    }

    public T getFront()
    {
        if(this.front == null) return this.defaultValue;

        return this.front.getData();
    }

    public T getBack()
    {
        if(this.back == null) return this.defaultValue;

        return this.back.getData();
    }

    public bool isEmpty()
    {
        return this.front == null;
    }

    public int getSize()
    {
        return this.size;
    }

    public void clear()
    {
        while(this.front != null)
        {
            this.size--;
            SingleLinkNode<T> node = this.front;
            this.front = this.front.getNext();
            node.setNext(null);
        }

        this.back = null;
        this.front = null;
    }
}