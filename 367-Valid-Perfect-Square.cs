public class Solution {
   public bool IsPerfectSquare(int num)
{

    return Math.Floor(Math.Sqrt(Convert.ToDouble(num))) == Math.Sqrt(Convert.ToDouble(num));
}
}