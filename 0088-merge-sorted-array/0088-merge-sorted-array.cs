public class Solution {
     public void Merge(int[] nums1, int m, int[] nums2, int n)
{
    for (int ss = nums1.Length-1; ss-n>=0 ; ss--)
        nums1[ss] = nums1[ss-n];
    int i = n,o= 0,s=0;
    while(i<nums1.Length&&o<nums2.Length)
    {
        if (nums1[i] <= nums2[o])
        {
            nums1[s] = nums1[i];
            i++;
        }
        else
        {
            nums1[s] = nums2[o];
            o++;
        }
        s++;
    }
    while (i < nums1.Length)
    {
        nums1[s] = nums1[i];
        i++;
        s++;
    }
    while(o < nums2.Length)
    {
        nums1[s] = nums2[o];
        o++;
        s++;
    }
}
}