public class Solution {
    public int MaxArea(int[] height)
{
    const int bufferSize = 16384;
using var input = new StreamReader(
  Console.OpenStandardInput(),
  bufferSize: bufferSize);
using var output = new StreamWriter(
  Console.OpenStandardOutput(),
  bufferSize: bufferSize);
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