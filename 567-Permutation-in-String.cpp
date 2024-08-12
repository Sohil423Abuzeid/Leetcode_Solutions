class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> char_counter,s1_temp;
        bool ans=false,flag;
        for(int o=0 ; o < s1.length();o++){
                    s1_temp[s1[o]]++;
        }
        int r=0,l=0;
        while(r<s2.length())
        {
            char_counter[s2[r]]++;
            if(r-l+1>s1.length())
            {
                char_counter[s2[l]]--;
                l++;
            }
            flag =true;
            for(char i = 'a';i<='z';i++)
            {
                flag&= s1_temp[i]==char_counter[i];
            }
            ans|=flag;
            r++;
        }
        return ans ;
    }
};