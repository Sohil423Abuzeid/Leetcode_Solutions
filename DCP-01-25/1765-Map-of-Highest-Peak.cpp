class Solution {
private:
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    bool valid(int i ,int o ,int n ,int m)
    {
        if(i<0||o<0||i>=n||o>=m)
            return false;
        return true;
    }
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        queue<pair<int,int>> bfs;
        int n = isWater.size(),m = isWater[0].size();
        for(int i = 0 ; i <n;i++)
            for(int o=0; o<m ;o++)
                if(isWater[i][o]==1)
                {
                    bfs.push({i,o});
                }
        while(bfs.size()>0)
        {
            pair<int,int> temp = bfs.front();
            int x =temp.first;
            int y= temp.second;
            bfs.pop();
            for(int i = 0 ; i < 4 ; i++)
            {
                if(valid(x+dx[i],y+dy[i],n,m)&& isWater[x+dx[i]][y+dy[i]]==0)
                    {
                        bfs.push({x+dx[i],y+dy[i]});
                        isWater[x+dx[i]][y+dy[i]]=isWater[x][y]+1;
                    }
            }
        }
        for(int i = 0 ; i <n;i++)
            for(int o=0; o<m ;o++)
                    isWater[i][o]--;
        return isWater;
    }
};