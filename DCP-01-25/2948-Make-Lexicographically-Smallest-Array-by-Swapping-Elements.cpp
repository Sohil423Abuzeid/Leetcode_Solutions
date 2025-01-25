class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        vector<pair<int,int>> nums2 (nums.size());
        for(int i =0 ; i < nums.size();i++)
        {
            nums2[i]={nums[i],i};
        }
        sort(nums2.begin(),nums2.end());
        vector<int> nums3{nums2[0].first},indices{nums2[0].second};
        for(int i=1;i<nums.size();i++){
            if(abs(nums2[i].first-nums2[i-1].first) <= limit ){
                nums3.push_back(nums2[i].first);
                indices.push_back(nums2[i].second);
            }
            else 
            {
                sort(indices.begin(),indices.end());
                for(int o =0 ; o < indices.size();o++)
                    nums[indices[o]]= nums3[o];
                nums3={nums2[i].first};
                indices={nums2[i].second};
            }
        }
        sort(indices.begin(),indices.end());
        for(int o =0 ; o < indices.size();o++)
                 nums[indices[o]]= nums3[o];
        return nums;
    }
};