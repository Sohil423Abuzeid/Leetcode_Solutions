class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        vector<int> freq(4005,0);
        for(int i=0 ; i< arr.size();i++){
            if(freq[2*arr[i]+2000]==1)
                return true;
                if(arr[i]%2==0&&freq[arr[i]/2+2000]==1)
                return true;
            freq[arr[i]+2000]=1;
        }
        return false;
    }
};