public class Solution {
  public string RemoveStars(string s)
{
    Stack<char> chars = new Stack<char>();
    for (int i = 0;i < s.Length;i++)
    {
        if (s[i] == '*')
            chars.Pop();
        else
            chars.Push(s[i]);
    }
    string ans = "";
    foreach(char c in chars)
        ans=c+ans;
    return ans;
   
}
}