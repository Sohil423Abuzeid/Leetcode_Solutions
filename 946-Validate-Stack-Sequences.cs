public class Solution {
    public bool ValidateStackSequences(int[] pushed, int[] popped)
{
    int ss=0;
    Stack<int> asd=new Stack<int>();
    foreach(int s in pushed)
    {
       asd.Push(s);
        while(asd.Count > 0 && asd.Peek() == popped[ss]) {
            asd.Pop();
            ss++;
        }
    }
    return asd.Count == 0;
}
}