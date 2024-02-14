public class Solution {
     public bool IsValid(string s)
 {
     Dictionary<char,int> dict = new Dictionary<char,int>();
     dict['('] = 1;
     dict[')'] = 2;
     dict['{'] = 3;
     dict['}'] = 4;
     dict['['] = 5;
     dict[']'] = 6;
     Stack<int> stack = new Stack<int>();
     for (int i = 0; i < s.Length; i++)
     {
         if (dict[s[i]] % 2 == 1)
             stack.Push(dict[s[i]] );
         else if (stack.Count == 0 || dict[s[i]] - 1 != stack.Peek())
             return false;
         else
             stack.Pop();
     }
     return stack.Count == 0;
 }
}