class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        multiset<int>Nums1RemainingNumbers;
        for (int i = 0; i < nums1.size(); i++)
            Nums1RemainingNumbers.insert(nums1[i]);
        vector<int> ans(nums1.size(), -1);
        for (int i = 0; i < nums2.size(); i++)
        {
            auto temp =Nums1RemainingNumbers.upper_bound(nums2[i]);
            if (temp != Nums1RemainingNumbers.end())
            {
                    ans[i] = *temp;
                    Nums1RemainingNumbers.erase(temp);
            }
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (ans[i] == -1)
            {
                ans[i] = *Nums1RemainingNumbers.begin();
                Nums1RemainingNumbers.erase(Nums1RemainingNumbers.begin());
            }
        }
        return ans;
    }
};