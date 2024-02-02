public class Solution {
   public void SortColors(int[] nums)
 {
int i = 0, j = nums.Length - 1;
for (int o = 0; o < nums.Length; o++)
{
asd:
    while (i < nums.Length && nums[i] == 0) i++;
    while (j >= 0 && nums[j] == 2) j--;
    if (i < o && nums[o] == 0)
    {
        (nums[i], nums[o]) = (nums[o], nums[i]);
        i++;
        goto asd;
    }
    if (j >= o && nums[o] == 2)
    {
        (nums[j], nums[o]) = (nums[o], nums[j]);
        j--;
        goto asd;
    }
}
 }
}
