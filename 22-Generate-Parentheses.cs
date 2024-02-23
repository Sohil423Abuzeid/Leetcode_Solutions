public class Solution {
    int count(int a)
{
    int b = 0;
    while (a>0)
    {
        b++;
        a = a & (a - 1);
    }
    return b;
}
Stack<int> tester = new Stack<int>();
bool right(string a)
{
    tester.Clear();
    for (int i = 0; i < a.Length; i++)
    {
        if(tester.Count == 0) tester.Push(a[i]);
        else if (tester.Peek() != a[i] && a[i]==')') tester.Pop();
        else tester.Push(a[i]);
    }
    return tester.Count == 0;
}
public IList<string> GenerateParenthesis(int n)
{ 
    List<string> result = new List<string>();  
    n *= 2;
    for (int i = 1; i < 1<<n; i++)
        if(count(i)==n/2)
            {
                string s = \\;
                char a = '(',b=')';
                if (i % 2 == 1) (a, b) = (b, a);
                for (int o = 0; o < n; o++)
                    if ((i & (1 << o)) > 0)
                        s = a + s;
                    else
                        s = b + s;
                if(!result.Contains(s)&& right(s))
                result.Add(s);
            }    
    return result;
}
}