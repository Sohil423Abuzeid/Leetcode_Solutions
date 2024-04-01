public class Solution
{
    int n;
    IList<IList<int>> ans;
    int[] ints;
    void build(List<int> a , int b)
    {
        if(a.Count == n) {
            ans.Add(a);
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if(((1<<i)&b)==0)
            {
                List<int> temp = new List<int>(a);
                temp.Add(ints[i]);
                build(temp, b | (1 << i));
            }
        }
    }
    public IList<IList<int>> Permute(int[] nums)
    {
        n = nums.Length;
        ints = new int[n];
        for (int i = 0; i < n; i++)
        {
            ints[i] = nums[i];
        }
        ans = new List<IList<int>>();
        build(new List<int>(), 0);
        return ans;
    }
}