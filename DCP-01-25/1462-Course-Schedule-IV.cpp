class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<int>> graph(numCourses);
        for(auto aa : prerequisites)
            graph[aa[1]].push_back(aa[0]);
        vector<bool> ans;
        for(auto aa :queries)
        {
            stack<int> dfs;
            vector<bool> vis (numCourses,false);
            dfs.push(aa[1]);
            bool flag= false;
            while(dfs.size()>0)
            {
                int aaa =dfs.top();
                dfs.pop();
                if(aaa==aa[0])
                {
                    flag = true;
                    break;
                }
                for(auto aaaa : graph[aaa])
                    if(!vis[aaaa]){
                        vis[aaaa]=true;
                        dfs.push(aaaa);
                    }
            }
            ans.push_back(flag);
        }
        return ans;
    }
};