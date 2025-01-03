class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        int ans=-1;
        vector<int> freq(n,0);
        for(int i =0 ; i < edges.size();i++){
            freq[edges[i][1]]++;
        }
        for(int i=0;i<n;i++){
            if(freq[i]==0)
            {
                if(ans==-1)
                    ans=i;
                else return -1;
            }
        }
        return ans ;
    }
};