class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long ans= 1e9,suf=0,pre=grid[1][0];
        for(int i= grid[0].size()-1;i>0;i--)
            suf+= grid[0][i];
        ans = suf;
        for(int i =1 ; i < grid[1].size()-1;i++)
        {
            suf-= grid[0][i];
            ans= min(ans,max(suf,pre));
            pre+= grid[1][i];
        }
        ans= min(ans,pre);        
        return ans ;
    }
};