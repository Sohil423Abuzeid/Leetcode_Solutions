public class Solution {
    public int MinSubArrayLen(int target, int[] nums)
{
    int i=0,o=0,sum=0,min=int.MaxValue;
    while(o< nums.Length)
    {
        sum += nums[o];
        while (sum-nums[i] >= target)
        {
           sum -= nums[i];
            ++i;
        }
        if(sum>=target)min = Math.Min(min, o - i + 1);
        ++o;
    }
    return min!=int.MaxValue?min:0 ;
}
}