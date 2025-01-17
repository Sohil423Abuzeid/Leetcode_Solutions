class Solution {
public:
    bool checkPowersOfThree(int n) {
        long long a =pow(3,33);
        while(a>=1)
        {
            if(a<=n)
                n-=a;
            a/=3;
        }
        return n==0;
    }
};