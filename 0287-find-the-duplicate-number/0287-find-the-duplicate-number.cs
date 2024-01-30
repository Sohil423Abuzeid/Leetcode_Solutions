using System.Linq;
public class Solution
{
    public int FindDuplicate(int[] nums)
    {
       var a= nums.GroupBy(x => x).Where(g=> g.Count() > 1).Select(g => new { Item = g.Key, Frequency = g.Count() });
        return a.First().Item ;
    }
}