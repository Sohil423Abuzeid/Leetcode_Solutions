class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26,0);
        int ans=0;
        for(auto &c:s)
            freq[c-'a']++;
        for(int i =0 ; i < 26; i++)
            ans+= freq[i]%2==0?freq[i]==0?0:2:1;
        return ans ;
    }
};