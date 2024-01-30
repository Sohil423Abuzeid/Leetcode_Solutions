public class Solution
{
    public int FindDuplicate(int[] nums)
    {
        Dictionary<int,int> keyValuePairs = new Dictionary<int,int>();
        foreach (int i in nums)
            if (keyValuePairs.ContainsKey(i))
                return i;
            else keyValuePairs[i]=1;
        return -1;
    }
}