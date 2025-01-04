class Solution {
public:
  int countPalindromicSubsequence(string s) {
    vector<set<char>> chars(26);
    vector<bool> be(26, false);
    vector<int> mx(26, 0);
    int ans = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        int temp = s[i] - 'a';
        mx[temp] = max(mx[temp], (int)chars[temp].size());
        for (int o = 0; o < 26; o++)
        {
            if (be[o])
            {
                chars[o].insert(s[i]);
            }
        }
        be[temp] = true;
    }
    for (auto aa : mx)
        ans += aa;
    return ans;
}
};