class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long  n = nums.size(), sum= 0,isum=0;int ans=0;
        for(int i= 0;i<n;i++)
        {
            sum+= nums[i];
        }
        for(int i= 0;i<n-1;i++)
        {
            isum+= nums[i];
            if(isum>=sum-isum)
                ans++;
        }
        return ans ;
    }
};