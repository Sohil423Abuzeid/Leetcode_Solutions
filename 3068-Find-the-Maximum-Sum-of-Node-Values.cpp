class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int n = nums.size();
vector<int> k_digits,others;
long long sum = 0;
for (int o = 0; o < n; o++)
{
    sum += nums[o];
}
long long ans = sum;

for (int o = 0; o < n; o++)
{
    if (sum < sum - nums[o] + (nums[o] ^ k))
    {
        nums[o] ^= k;
        others.push_back(o);
    }
    else
        k_digits.push_back(o);
}
sum = 0;
for (int o = 0; o < n; o++)
{
    sum += nums[o];
}
if (others.size() % 2 == 0)return sum;
long long a = sum, b = sum;
a = sum- nums[others[0]] + (nums[others[0]] ^ k);

for (int i = 1; i < others.size(); i++)
{
    a = max(a,sum - nums[others[i]] + (nums[others[i]] ^ k));
}
if (others.size() == n)return a;

bool flag = false;
b = sum - nums[k_digits[0]] + (nums[k_digits[0]] ^ k);
for (int i = 1; i < k_digits.size(); i++)
{
    b = max(b, sum - nums[k_digits[i]] + (nums[k_digits[i]] ^ k));
}

return max(a, b);
    }
};