public class Solution {
    public int NumOfSubarrays(int[] arr, int k, int threshold)
{
    int o=0,i=k,ans=0;
    double sum = 0;
    for (int s = 0; s < k; s++)
        sum += arr[s];
    if (sum / k >= threshold) ans++;
    while (i < arr.Length) {
        sum += arr[i++];
        sum -= arr[o++];
        if (sum / k >= threshold) ans++;
    }
    return ans;
}
}