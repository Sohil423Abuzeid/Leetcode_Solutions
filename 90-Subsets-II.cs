public class Solution
{
    public IList<IList<int>> SubsetsWithDup(int[] nums)
    {
        IList<IList<int>> ans = new List<IList<int>>();
        HashSet<int> set = new HashSet<int>();
        Array.Sort(nums);
        for (int i = 0; i < 1 << nums.Length; i++)
        {
            int temp2 = 1;
            List<int> temp = new List<int>();
            for (int j = 0; j < nums.Length; j++)
            {
                Console.WriteLine(i + \ \ + j + \ \ + (1 << j) + \ \ + ((1 << j) & i) + \ \ + (((1 << j) & i) > 0));
                if (((1 << j) & i) > 0)
                {
                    temp.Add(nums[j]);
                    temp2 = temp2 * 10 + nums[j];
                }
            }
            Console.WriteLine(temp2);
            if (!set.Contains(temp2))
                ans.Add(temp);
            set.Add(temp2);
        }
        return ans;
    }
}