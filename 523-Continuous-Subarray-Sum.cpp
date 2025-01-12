class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,bool> is;
        int a=0,temp=0;
        for(auto &aa : nums )
        {
            a+=aa;
            a%=k;
            if(is[a])
                return true;
            is[temp]=true;
            temp=a;
        }
        return false;
    }
};