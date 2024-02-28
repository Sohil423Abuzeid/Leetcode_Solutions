public class Solution {
    public int SearchInsert(int[] nums, int target)
{
    int s = 0, e = nums.Length-1,mid,ans=-1;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (nums[mid] <= target)
        {
            ans = mid;
            s = mid + 1;
        }
        else e = mid - 1;
    }
    return ans + (ans!=-1&&nums[ans]==target ? 0 : 1);
}
}