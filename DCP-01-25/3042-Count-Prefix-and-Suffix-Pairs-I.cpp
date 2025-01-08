class Solution {
    private:
    long long compute_hash(string const& s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        map<long long,int> hashed;
        int ans=0;
        const int p = 31;
        const int m = 1e9 + 9;
        for(auto &s : words)
        {
            long long hash_value = 0;
            long long p_pow = 1;
            for (int i =0; i<s.size();i++) {
                hash_value = (hash_value + (s[i] - 'a' + 1) * p_pow) % m;
                p_pow = (p_pow * p) % m;
                hash_value = (hash_value + (s[s.size()-i-1] - 'a' + 1) * p_pow) % m;
                p_pow = (p_pow * p) % m;
                ans+= hashed[hash_value];
            }
            hashed[hash_value]++;
        }
        return ans;
    }
};