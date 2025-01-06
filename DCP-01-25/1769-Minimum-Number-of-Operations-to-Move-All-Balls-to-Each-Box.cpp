class Solution {
public:
    vector<int> minOperations(string boxes) {
        int a =0,asum=0,b=0,bsum=0;
        vector<int> ans(boxes.size());
        for(int i=0 ; i < boxes.size();i++)
        {
            asum+= a;
            a+= (boxes[i]=='1');
        }
        for(int i=boxes.size()-1 ; i >=0;i--)
        {
            bsum+= b;
            ans[i] =bsum+asum;
            if(boxes[i]=='1')
            {
                b++;
                a--;
            }
            asum-= a;
        }
        return ans;
    }
};