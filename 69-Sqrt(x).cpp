class Solution {
public:
    int mySqrt(int x) {
        long long l =0 , r = ((long long)1<<30 ),mid=0,ans=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(mid*mid<=x)
            {
                l=mid+1;
                ans=mid;
            }
            else 
                r=mid-1;
        }
        return ans;
    }
};