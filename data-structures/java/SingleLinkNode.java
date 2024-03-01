public class SingleLinkNode<T>
{
    private T data;
    private SingleLinkNode next;

    public SingleLinkNode()
    {}

    public SingleLinkNode(T data)
    {
        this.data = data;
    }

    public SingleLinkNode(T data, SingleLinkNode next)
    {
        this.data = data;
        this.next = next;
    }

    public void setData(T data)
    {
        this.data = data;
    }

    public T getData()
    {
        return this.data;
    }

    public void setNext(SingleLinkNode next)
    {
        this.next = next;
    }

    public SingleLinkNode getNext()
    {
        return this.next;
    }
}