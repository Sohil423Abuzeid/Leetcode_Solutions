class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int ans= 0;
        map<int,int> asd;
        for(auto &answ : answers)
        {
            asd[answ]++;
        }   
        for(auto &[a,b]: asd)
        {
            ans+= (b+a)/(a+1)*(a+1);
        }
        return ans;
    }
};