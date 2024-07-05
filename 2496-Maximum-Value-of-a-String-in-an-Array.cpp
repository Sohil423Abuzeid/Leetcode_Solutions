class Solution {
public:
    int maximumValue(vector<string>& strs) {
   int  ans = 0;
    for (int i = 0; i < strs.size(); i++)
    {
        bool f = true;
        for (int o = 0; o < strs[i].length(); o++)
        {
            if (strs[i][o] >= 'a' && strs[i][o] <= 'z')
                f = false;
        }
        string s = strs[i];
        if (f)
            ans = max(ans,stoi(s));
        else
            ans = max(ans, (int) strs[i].length());
    }
    return ans;
}
};