class Solution {
public:
    int divide(long dividend, long divisor) {
       bool flag =false;
       if((dividend<0)&&(divisor<0))
        cout<<\hhh\;
        else if((dividend<0)||(divisor<0))
        flag=true;
        long ans=0;
        dividend=abs(dividend);
        divisor =abs(divisor);

        while(dividend>=divisor+divisor+divisor+divisor+divisor)
        {
            dividend-=divisor+divisor+divisor+divisor+divisor;
            ans+=5;
        }
        while(dividend>=divisor)
        {
            dividend-=divisor;
            ans++;
        }
        if(flag)
            return stoi(\-\+to_string(min(ans,long(2147483648))));
        else
            return min(ans,long(2147483647));
    }
};