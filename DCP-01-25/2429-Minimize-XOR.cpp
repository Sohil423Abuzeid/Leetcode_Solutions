class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int a=0;
        while(num2>0)
        {
            num2= (num2-1)&num2;
            a++;
        }
        for(int i=31;i>=0&&a>0;i--)
        {
            if((num1&(1<<i))>0)
            {
                num2+= (1<<i);
                a--;
            }
        }
        for(int i=0;i<32&&a>0;i++)
        {
            if((num1&(1<<i))==0)
            {
                num2+= (1<<i);
                a--;
            }
        }
        return num2;
    }
};