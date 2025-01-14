class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        // not best after read the stat again but iam lazy to change it i thought numbers can repeat  
        map<int,bool>inA,inB,Done;
        vector<int> ans (A.size());
        for(int i =0 ; i < A.size();i++){
            ans[i]=i-1>=0?ans[i-1]:0;
            if(inB[A[i]]&&!Done[A[i]])
                ans[i]++,Done[A[i]]=true;
            inA[A[i]]=true;
            if(inA[B[i]]&&!Done[B[i]])
                ans[i]++,Done[B[i]]=true;
            inB[B[i]]=true;
        } 
        return ans;
    }
};