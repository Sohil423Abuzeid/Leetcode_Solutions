public class Solution {
     public int RemoveDuplicates(int[] nums)
{
    int s = 0;
    if (nums.Length > 1 && nums[0] == nums[1])
        s++;
    for (int i = 0; i < nums.Length; i++)
        if (nums[i] != nums[s]) {
            s++;
            nums[s]= nums[i];
            if (nums.Length > i + 1 && nums[i] == nums[i+1]) s++;
            nums[s] = nums[i];
        }
    return s+1;
}
}