class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<bool>terminal (graph.size(),false);
        vector<int> ans;
        for(int o = 0;o<7;o++)
        for(int i =graph.size()-1;i>=0;i--){
            bool flag =true;
            for(auto dis : graph[i])
            {
                flag &=  terminal[dis];
            }
            terminal[i]=flag;
            cout << i << " "<<  terminal[i]<<endl;
        }
            for(int i =0 ; i < graph.size();i++)
                if(terminal[i])
                    ans.push_back(i);
        return ans;
    }
};