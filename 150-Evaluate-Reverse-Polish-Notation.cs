public class Solution {
    public int EvalRPN(string[] tokens)
 {
     Stack<int> stack = new Stack<int>();
     int a, b;
     foreach (string token in tokens)
     {
         if(int.TryParse(token,out a))
         {
             stack.Push(a);
         }
         else
         {
             switch (token)
             {
                 case \+\:
                     a= stack.Pop();
                     b= stack.Pop()+a;
                     stack.Push(b);
                     break;
                 case \-\:
                     a = stack.Pop();
                     b = stack.Pop() - a;
                     stack.Push(b);
                     break;
                 case \*\:
                     a = stack.Pop();
                     b = stack.Pop() * a;
                     stack.Push(b);
                     break;
                 case \/\:
                     a = stack.Pop();
                     b = stack.Pop() / a;
                     stack.Push(b);
                     break;
             }
         }
     }
     return stack.Peek();
 }
}