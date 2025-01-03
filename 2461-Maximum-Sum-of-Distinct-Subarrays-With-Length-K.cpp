class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long  l=0,r=0,ans=0,sum=0;
        vector<int> cnt (1e5+1,0);
        while(r<nums.size()){
            cnt[nums[r]]++;
            sum+=nums[r];
            while(r-l+1>k||cnt[nums[r]]>1){
                cnt[nums[l]]--;
                sum-=nums[l];
                l++;
            }
            if(r-l+1==k)ans=max(ans,sum);
            r++;
        }
        return ans;
    }
};