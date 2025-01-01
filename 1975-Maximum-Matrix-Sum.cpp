class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int mn =1e5;
        long long sum=0;
        int a=0;
        for(int i =0 ; i< matrix.size();i++)
            for(int o= 0; o < matrix[i].size();o++)
                {
                    if(matrix[i][o]<=0)a++;
                    sum+= abs(matrix[i][o]);
                    mn = min (mn,abs(matrix[i][o]));    
                }
        if(a%2==1)sum-=2*mn;
        return sum ;
    }
};