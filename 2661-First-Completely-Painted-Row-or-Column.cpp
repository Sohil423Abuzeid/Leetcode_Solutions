class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        map<int,int>val_col,val_row,col,row;
        int n = mat.size(),m= mat[0].size();
        for(int i =0 ; i < n;i++)
            for(int o  =0 ; o < m ; o++)
                {
                    val_col[mat[i][o]]=o;
                    val_row[mat[i][o]]=i;
                }
        for(int i =0; i < arr.size();i++)
        {
            row[val_row[arr[i]]]++;
            col[val_col[arr[i]]]++;
            if(col[val_col[arr[i]]]==n)return i;
            if(row[val_row[arr[i]]]==m)return i;
        }
        return 1;
    }
};