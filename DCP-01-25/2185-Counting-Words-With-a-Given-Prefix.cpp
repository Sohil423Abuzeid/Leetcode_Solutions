class Solution {
private:
    long long compute_hash(string const& s,string const& b) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (int i =0 ; i < b.size();i++) {
        hash_value = (hash_value + (s[i] - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
public:
    int prefixCount(vector<string>& words, string pref) {
        int pre = compute_hash(pref,pref),ans=0;
        for(auto &word :words)
        {
            if(word.size()<pref.size())
            {
                continue;
            }
            else if(compute_hash(word,pref)==pre){
                ans++;
            }
        }
        return ans;
    }
};