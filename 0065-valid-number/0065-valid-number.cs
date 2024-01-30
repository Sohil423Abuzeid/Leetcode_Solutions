public class Solution {
    public bool IsNumber(string s)
{
    if (!(s.Contains('e') || s.Contains('E')))
        return double.TryParse(s, out double b) && !double.IsNaN(b) && !double.IsInfinity(b);
    else
        return (double.TryParse(s.Substring(0, s.IndexOf(s.Contains('e') ? 'e' : 'E')), out double b) && !double.IsNaN(b) && !double.IsInfinity(b)) && (BigInteger.TryParse(s.Substring(s.IndexOf(s.Contains('e') ? 'e' : 'E') + 1), out BigInteger c)) ;//&& !int.IsNaN(c) && !int.(c));
}
}