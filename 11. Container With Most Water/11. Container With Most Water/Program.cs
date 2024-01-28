public class Solution
{
    public int MaxArea(int[] height)
    {
        int mvolum=0,i = 0, o = height.Length - 1;
        while (i < o) {
                mvolum = Math.Max(mvolum, Math.Min(height[i], height[o]) * (o - i));
            if (height[i] < height[o])
                i++;
            else
                o--;
        }
        return mvolum;
    }
}
namespace _11._Container_With_Most_Water
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello, World!");
        }
    }
}