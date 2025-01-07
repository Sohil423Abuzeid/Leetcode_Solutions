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
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(int i =0 ; i < words.size();i++){
            for(int o =0 ; o < words.size();o++)
            {
                if(i==o)
                    continue;
                for(int ii =0 ; ii< words[o].size();ii++)
                    {
                        string temp="";
                        for(int oo =ii ; oo< words[o].size();oo++)
                        {
                            temp+= words[o][oo];
                            if(temp==words[i])
                            {
                                cout << "test";
                                ans.push_back(words[i]);
                                goto asd;
                            }
                        }
                    }
                
            }
            asd:
        }
        return ans;
    }
};