class Solution {
public:
    bool canConstruct(string s, int k) {
        vector<int> chars(26,0);
        for(auto &c : s)
        {
            chars[c-'a']++;
        }
        int cnt =0 ;
        for(int i=0;i< 26;i++)
        {
            if(chars[i]%2)
                cnt++;
        }
        return cnt<=k&&s.size()>=k;
    }
};