public class Solution {
     public int[] AsteroidCollision(int[] asteroids)
 {
     Stack<int> stack = new Stack<int>();
     for (int i = 0; i < asteroids.Length; i++)
     {
         if (asteroids[i]>=0||stack.Count==0)
         {
             stack.Push(asteroids[i]);
         }
         else
         {
             int a = asteroids[i] * -1;
             while(stack.Count > 0&&stack.Peek()>=0&&a> stack.Peek())
                 stack.Pop();
             if (stack.Count == 0|| stack.Peek() < 0) stack.Push(asteroids[i]);
             else if (stack.Peek()==a)stack.Pop();
         }
     }
     int []ans=new int[stack.Count()];
     for (int i = stack.Count()-1;i>=0;i--)
     {
         ans[i]=stack.Pop();
     }
     return ans;
 }
}