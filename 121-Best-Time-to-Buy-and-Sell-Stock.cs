public class Solution {
   public int MaxProfit(int[] prices)
{
    int ans = 0, max = prices[prices.Length-1];
    for (int i = prices.Length-1; i >= 0; i--) { 
        max= Math.Max(max, prices[i]);
        ans = Math.Max(ans, max - prices[i]);
    }
    return ans;
}
}