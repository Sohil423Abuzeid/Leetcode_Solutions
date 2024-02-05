public class Solution {
 public IList<int> FindClosestElements(int[] arr, int k, int x)
{
    List<int> result = new List<int>();
    int a = 0, b = 0,c=Math.Abs( arr[0]-x);
    for (int i = 0; i < arr.Length; i++)
    {
        if (Math.Abs(arr[i] - x)<c)
        {
            c= Math.Abs(arr[i] - x);
            a = i - 1;
            b = i + 1;
        }
    }
    Console.WriteLine(a+\ \+b);
    while (a >= 0 && b < arr.Length && b - a - 1 < k)
    {
        if (Math.Abs(x - arr[a]) <= Math.Abs(arr[b] - x))
        {
            a--;
        }
        else
            b++;
    }
    while (a >= 0 && b - a - 1 < k) a--;
    while (b < arr.Length && b - a - 1 < k) b++;
    for (int i = a + 1; i < b; i++)
        result.Add(arr[i]);
    return result;
}
}