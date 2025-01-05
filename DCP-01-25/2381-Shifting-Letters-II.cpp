class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
       vector<int> partial(s.size()+1,0);
            for(auto &shift : shifts)
            {
                partial[shift[0]]+= 2*shift[2]-1;
                partial[shift[1]+1]-= 2*shift[2]-1;
            }
            int temp=0;
            for(int i = 0 ; i < s.size();i++)
            {
                temp+=partial[i];
                s[i]= ((100000*26)+s[i]-'a'+temp)%26+'a';
            }
        return s;

    }    
};