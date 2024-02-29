public class Solution {
    public IList<IList<string>> GroupAnagrams(string[] strs) {
        Dictionary<string, int> ind = new Dictionary<string, int>();
        List<List<string>> ans = new List<List<string>>();

        for (int i = 0; i < strs.Length; i++) {
            char[] t = new char[26];
            foreach (char c in strs[i]) {
                t[c - 'a']++;
            }

            string key = new string(t);

            if (!ind.ContainsKey(key)) {
                ind[key] = ans.Count + 1;
                ans.Add(new List<string> { strs[i] });
            } else {
                ans[ind[key] - 1].Add(strs[i]);
            }
        }

        return ans.Cast<IList<string>>().ToList();
    }
}
