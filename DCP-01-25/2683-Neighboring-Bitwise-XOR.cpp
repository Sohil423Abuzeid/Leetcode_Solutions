class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int a=0 ;
        for(auto &aa: derived )
            a^=aa;
        return a==0;
    }
};