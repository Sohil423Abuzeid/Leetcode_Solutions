class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> row_freq(grid.size(),0);
        vector<int> col_freq(grid[0].size(),0);
        for(int i =0 ; i < grid.size();i++)
            for(int o = 0;o<grid[0].size();o++)
                if(grid[i][o]==1)
                {
                    row_freq[i]++;
                    col_freq[o]++;
                }
        int ans=0;
         for(int i =0 ; i < grid.size();i++)
            for(int o = 0;o<grid[0].size();o++)
                if(grid[i][o]==1&&(col_freq[o]>1||row_freq[i]>1))
                {
                    ans++;
                }
        return ans;

    }
};