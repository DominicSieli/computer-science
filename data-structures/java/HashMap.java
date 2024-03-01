import java.util.*;

public class HashMap<T>
{
    private T defaultValue;
    private final int SIZE = 1000;

    private List<Pair<T>>[] table = new ArrayList[SIZE];

    public HashMap()
    {
        for(int i = 0; i < SIZE; i++)
        {
            table[i] = new ArrayList<Pair<T>>();
        }
    }

    public void insert(String key, T data)
    {
        int hash = hash(key);

        for(Pair<T> pair : table[hash])
        {
            if(pair.key == key) {pair.data = data; return;}
        }

        table[hash].add(new Pair(key, data));
    }

    public T getData(String key)
    {
        int hash = hash(key);

        for(Pair<T> pair : table[hash])
        {
            if(pair.key == key) return pair.data;
        }

        return defaultValue;
    }

    public void remove(String key)
    {
        int hash = hash(key);
        table[hash].clear();
    }

    public boolean empty()
    {
        for(int i = 0; i < table.length; i++)
        {
            if(table[i].size() > 0) return false;
        }

        return true;
    }

    private int hash(String key)
    {
        int hash = 0;

        for(char chr : key.toCharArray())
        {
            hash += (int)chr;
        }

        return hash % SIZE;
    }
}