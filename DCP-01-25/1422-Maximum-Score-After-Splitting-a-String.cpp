class Solution {
public:
    int maxScore(string s) {
        int c0 = 0,c1=0,ans=0;
        for(int i =0 ; i < s.length();i++)
            if(s[i]=='1')
                c1++;
        for(int i =0 ; i < s.length()-1;i++){
            if(s[i]=='1')
                c1--;
            else
                c0++;
            ans=max(ans,c0+c1);
        }
        return ans;
    }
};