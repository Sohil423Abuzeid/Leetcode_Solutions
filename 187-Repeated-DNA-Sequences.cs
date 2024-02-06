public class Solution {
   public IList<string> FindRepeatedDnaSequences(string s)
{
    
        List<string> result = new List<string>();
        string t=\\;
        Dictionary<string, int> keyValuePairs = new Dictionary<string, int>();
        for (int i = 0; i < Math.Min(10, s.Length); i++)
            t+=s[i];
        if (s.Length > 8)
            keyValuePairs[t] = 1;
        for (int i = 10; i < s.Length; i++)
        {
            t=t.Remove(0, 1)+s[i];
            if (!keyValuePairs.ContainsKey(t))
                keyValuePairs[t] = 1;
            else if (keyValuePairs[t] == 1)
            {
                result.Add(t);
                keyValuePairs[t]++;
            }
        }
        return result;
    
}
}