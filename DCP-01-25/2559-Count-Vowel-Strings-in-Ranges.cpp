class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        set<char> vowel {'a', 'e', 'i', 'o',  'u'};
        vector<int>pre  (words.size()+1,0);
        for(int i =0 ;i<words.size();i++)
        {
            pre[i+1]= (vowel.find(words[i][0])!=vowel.end()&&vowel.find(words[i][words[i].length()-1])!=vowel.end()?1:0);
        }
        for(int i =1 ;i<words.size()+1;i++)
        {
            pre[i]+=pre[i-1]; 
        }
        vector<int> ans;
        for(int i=0; i<queries.size();i++)
        {
            ans.push_back(pre[queries[i][1]+1]-pre[queries[i][0]]);
        }
        return ans;
    }
};