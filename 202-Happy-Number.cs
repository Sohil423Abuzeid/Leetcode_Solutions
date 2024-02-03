public class Solution {
    public bool IsHappy(int n)
 {
     HashSet<int> visited = new HashSet<int>();
     while(!visited.Contains(n))
     {
         visited.Add(n);
         int temp = 0;
         while (n > 0)
         {
             temp += n % 10 * (n % 10);
             n /= 10;
         }
         n = temp;
     }
     return n == 1;
 }
}