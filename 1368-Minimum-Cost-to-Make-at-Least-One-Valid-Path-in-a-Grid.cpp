class Solution {
    private:
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    bool vaild(int i, int o, int n, int m)
    {
        if (i >= 0 && o >= 0 && i < n && o < m)
            return true;
        return false;
    }
public:
      int minCost(vector<vector<int>>& grid) {
      int n = grid.size(), m = grid[0].size();
      priority_queue< pair<int, pair<int, int>>,vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>dst;
      vector<vector<bool>> vis(n, vector<bool>(m,false));
      dst.push(make_pair( 0, make_pair(0,0) ));
      while (dst.top().second != make_pair(n-1, m-1))
      {
          pair<int,int> pai= dst.top().second;
          int cost = dst.top().first;
          dst.pop();
          if( vis[pai.first][pai.second])
            continue;
          vis[pai.first][pai.second] = true;
          for (int i = 0; i < 4; i++)
          {
              if (vaild(pai.first + dx[i], pai.second + dy[i], n, m)&&!vis[pai.first+dx[i]][pai.second+dy[i]]){
                  dst.push(make_pair(cost + (grid[pai.first][pai.second] == i + 1 ? 0 : 1), make_pair(pai.first + dx[i], pai.second + dy[i])));
              }
          }
      }
      return dst.top().first;
  }
};