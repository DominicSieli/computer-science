public class Stack<T>
{
    private int size = 0;
    private T defaultValue;
    private SingleLinkNode<T> top = null;

    public Stack() {}

    public void push(T data)
    {
        this.size++;
        SingleLinkNode<T> node = new SingleLinkNode<T>(data, this.top);
        this.top = node;
    }
    
    public void pop()
    {
        if(this.top == null) return;

        this.size--;
        SingleLinkNode<T> node = this.top;
        this.top = this.top.getNext();
        node.setNext(null);
    }
    
    public T getTop()
    {
        if(this.top != null) return this.top.getData();

        return this.defaultValue;
    }
    
    public boolean isEmpty()
    {
        return this.top == null;
    }

    public int getSize()
    {
        return this.size;
    }
}