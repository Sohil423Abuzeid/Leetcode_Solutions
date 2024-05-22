public class Solution {
    public int FindKthLargest(int[] nums, int k)
{
    int []freq= new int[20001];
    for (int o = 0; o < nums.Length; o++)
    {
        freq[nums[o] + 10000]++;
    }
    int i = 20000;
    for (;k>0; i--)
    {
        k-= freq[i];
    }
    return  i -10000+1;
}
}