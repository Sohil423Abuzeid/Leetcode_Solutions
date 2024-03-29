public class Solution {
     public int[] TwoSum(int[] numbers, int target)
 {
     Dictionary<int,int> result = new Dictionary<int,int>();
     for (int i = 0; i < numbers.Length; i++)
     {
         if(result.ContainsKey(target - numbers[i]))
             return new int[] { result[target - numbers[i]], i + 1 };
         result[numbers[i]] = i+1;
     }
     return new int[] { 0, 0 };

 }
}