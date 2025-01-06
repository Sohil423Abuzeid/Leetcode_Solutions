class Solution {
public:
    double myPow(double x, long n) {
        if(n<0) return 1/myPow(x,abs(n));
        if(n==0)return 1;
        if(n==1)return x;
        else return myPow(x*x,n/2)*myPow(x,n%2);
    }
};