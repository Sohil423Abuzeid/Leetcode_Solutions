class Solution {
public:
    long long maxScore(vector<int>& nums) {
        if(nums.size()==1)return nums[0]*nums[0];
        vector<long long> GcdPre(nums.size()),LcmPre(nums.size()),GcdSuf(nums.size()),LcmSuf(nums.size());
        GcdPre[0]=nums[0];
        LcmPre[0]=nums[0];
        GcdSuf[nums.size()-1]=nums[nums.size()-1];   
        LcmSuf[nums.size()-1]=nums[nums.size()-1];
        for(int i = 1 ; i <nums.size();i++)
        {
            GcdPre[i]=__gcd(GcdPre[i-1],nums[i]*1ll);
        }
        for(int i = 1 ; i <nums.size();i++)
        {
            LcmPre[i]=(LcmPre[i-1]*nums[i]*1ll)/__gcd(LcmPre[i-1],nums[i]*1ll);
        }
        for(int i = nums.size()-2 ; i >=0;i--)
        {
            GcdSuf[i]=__gcd(GcdSuf[i+1],nums[i]*1ll);
        }  
        for(int i = nums.size()-2 ; i >=0;i--)
        {
            LcmSuf[i]=(LcmSuf[i+1]*nums[i]*1ll)/__gcd(LcmSuf[i+1],nums[i]*1ll);
        }
        long long ans = max({GcdPre[nums.size()-1]*LcmPre[nums.size()-1],GcdSuf[0]*LcmSuf[0],GcdPre[nums.size()-2]*LcmPre[nums.size()-2],GcdSuf[1]*LcmSuf[1]});
        for(int i =1 ; i < nums.size()-1;i++)
        {
            ans = max(ans,__gcd(GcdPre[i-1],GcdSuf[i+1])*((LcmSuf[i+1])/__gcd(LcmSuf[i+1],LcmPre[i-1])*LcmPre[i-1]));
        }  
        return ans ;
    }
};