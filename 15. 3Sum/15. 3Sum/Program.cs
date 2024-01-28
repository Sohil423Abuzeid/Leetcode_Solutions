namespace _15._3Sum
{
    public class Solution
    {
        public IList<IList<int>> ThreeSum(int[] nums)
        {
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
            for (int i = 0; i < uniqe_nums.Count; i++)
                    
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello, World!");
        }
    }
}