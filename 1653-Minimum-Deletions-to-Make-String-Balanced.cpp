class Solution {
public:
    int minimumDeletions(string s) {
        vector<int> a(s.length()+2,0),b(s.length()+2,0);
        for(int i =0 ; i < s.length();i++)
            if(s[i]=='a')
                a[i+1]++;
            else
                b[i+1]++;
        for(int i =1 ; i < s.length()+2;i++)
            b[i]+=b[i-1];
        for(int i = s.length(); i >=0 ; i--)
            a[i]+=a[i+1];
    int        ans=200000;
        for(int i = s.length()+1; i >0 ; i--)
            ans =min(ans,a[i]+b[i-1]);
        return ans;
    }
};