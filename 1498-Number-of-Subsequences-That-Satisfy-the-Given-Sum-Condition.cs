public class Solution {
   public int NumSubseq(int[] nums, int target)
{
    int mod = 1000000007;
    Dictionary<int, int> calco = new Dictionary<int, int>();
    int ss = 1;
    for (int s = 0; s <= 100000; s++)
    {
        calco[s] = ss;
        ss = (ss * 2) % mod;
    }
    Array.Sort(nums);
    int i = 0, o = nums.Length - 1, ans = 0;
    while (i <= o)
    {
        while (o - 1 >= i && nums[o] + nums[i] > target) o--;
        if (nums[o] + nums[i] <= target)
        {

            //else ans = (ans + ((i + 1) * (i+2 )) % mod) % mod;
            // ans = (ans + (i >= 0 ? calco[i] : 0))%mod;
            ans = (ans + (o - i >= 0 ? calco[o - i] : 0)) % mod;
        }

        i++;
    }
    return ans;
}
}
