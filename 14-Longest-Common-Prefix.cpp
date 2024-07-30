class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans =\\;
        for(int i = 0 ;  i < 10000; i ++)
        {
            bool f = true;
            char c = i<strs[0].length()?strs[0][i]:'A';
            for(int o = 0 ; o < strs.size(); o++)
            {
                if(i< strs[o].length()&&strs[o][i]==strs[0][i] )continue;
                f=false;
                break;
            }
            if(f)
                ans+=c;
            else 
                return ans ;
        }
        return ans ;
    }
};