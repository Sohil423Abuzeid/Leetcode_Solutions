public class Solution {
   public int[] MaxSlidingWindow(int[] nums, int k)
{
    int temp = 100000;
    int []ans=new int[nums.Length-k+1];
    PriorityQueue<int,int> asd1 = new PriorityQueue<int, int>();
    Dictionary<int,int> asd2 = new Dictionary<int,int>();
    int o=0,i=0;
    while (o < nums.Length)
    {
        if (asd2.ContainsKey(nums[o]))
        asd2[nums[o]]++;
        else
        asd2[nums[o]]=1;
        asd1.Enqueue(nums[o],temp- nums[o]);
        if (o - i + 1 > k)
        {
            asd2[nums[i]]--;
            i++;
        }
        while (asd2[asd1.Peek()]==0)
        {
            asd1.Dequeue();
        }
        ans[i]=asd1.Peek();
        o++;    
    }
    return ans;
}
}