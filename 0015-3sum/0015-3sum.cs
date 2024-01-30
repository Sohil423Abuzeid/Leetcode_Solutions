public class Solution
{
    public IList<IList<int>> ThreeSum(int[] nums)
    {
        IList<IList<int>> ans = new List<IList<int>>();
        Dictionary<int,int>nums_counter= new Dictionary<int, int>();
        List<int> uniqe_nums = new List<int>();
        foreach (int i in nums)
            if (nums_counter.ContainsKey(i))
                nums_counter[i]++;
            else
            {
                uniqe_nums.Add(i);
                nums_counter[i]= 1;
            }
        uniqe_nums.Sort();
        HashSet<List<int>> vis= new HashSet<List<int>>();
        for (int i = 0; i < uniqe_nums.Count; i++)
        {
            nums_counter[uniqe_nums[i]]--;
            for (int j = i; j < uniqe_nums.Count; j++)
            {
                if (nums_counter[uniqe_nums[j]] > 0)
                {
                    nums_counter[uniqe_nums[j]]--;
                    int t = 0 - (uniqe_nums[i] + uniqe_nums[j]);
                    if (t>= uniqe_nums[j]&&nums_counter.ContainsKey(t) && nums_counter[t] > 0)
                    {
                        List<int> list = new List<int>{ uniqe_nums[i], uniqe_nums[j],t};
                        if(!vis.Contains(list))
                        {
                            vis.Add(list);
                            ans.Add(list);
                        }
                    }
                    nums_counter[uniqe_nums[j]]++;
                }
            }
            nums_counter[uniqe_nums[i]]++;
        }
        return (ans);
    }
}