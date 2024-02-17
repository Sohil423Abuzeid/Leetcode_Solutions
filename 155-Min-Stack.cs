public class MinStack
{
    List<int> stack;
    public MinStack()
    {
       // Queue a;
      stack = new List<int>();
    }

    public void Push(int val)
    {
        stack .Add(val);
    }

    public void Pop()
    {
        stack.RemoveAt(stack.Count - 1);
    }

    public int Top()
    {
        return stack[stack.Count - 1];
    }

    public int GetMin()
    {
        int mn = stack[0];
        for (int i = 0; i < stack.Count; i++)
        {
           mn = Math.Min(mn, stack[i]);
        }
        return mn;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.Push(val);
 * obj.Pop();
 * int param_3 = obj.Top();
 * int param_4 = obj.GetMin();
 */