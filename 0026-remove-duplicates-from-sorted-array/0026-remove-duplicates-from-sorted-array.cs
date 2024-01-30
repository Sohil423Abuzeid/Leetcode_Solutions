public class Solution {
    public int RemoveDuplicates(int[] nums)
 {
     int s = 0;
     for (int i = 0; i<nums.Length; i++)
         if (nums[i] != nums[s])
         {
             s++;
             nums[s] = nums[i];
         }
     return s + 1;
 }
}