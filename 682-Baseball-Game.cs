public class Solution {
    public int CalPoints(string[] operations)
{
    int a;
    Stack<int> stack = new Stack<int>();
    foreach (string op in operations)
    {
        if (int.TryParse(op,out a))
                stack.Push(a);
        else if(op==\C\)
            stack.Pop() ;
        else if(op==\D\)
            stack.Push(stack.Peek()*2);
        else
        {
            int b=stack.Peek();
            stack.Pop();
            a= b+stack.Peek();
            stack.Push(b);
            stack.Push(a);
        }
    }
    a = 0;
    while(stack.Count > 0)
    {
        a += stack.Peek();
        stack.Pop();
    }
    return a;
}
}