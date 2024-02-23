public class Solution {
   int nn;
List<string> result = new List<string>();
void build(string s , int a ,int b)
{
    if (a > nn || b > nn||b>a) return;
    if (a == b&&a==nn) { 
        result.Add(s);
        build(s + \(\, a + 1, b);
        return;
    }
    else
    {
        build(s + \(\, a + 1, b);
        build(s + \)\, a , b+1);
    }

}
public IList<string> GenerateParenthesis(int n)
{
    nn = n;
    build(\(\, 1, 0);
    return result;
}
}