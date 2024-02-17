public class MyStack
{
    List<int> stack;

    public MyStack()
    {
        // Queue a;
        stack = new List<int>();
    }

    public void Push(int val)
    {
        stack.Add(val);
    }

    public int Pop()
    {
        int a = this.Top();
        stack.RemoveAt(stack.Count - 1);
        return a;
    }

    public int Top()
    {
        return stack[stack.Count - 1];
    }
    public bool Empty()
    {
        return stack.Count == 0;
    }
}