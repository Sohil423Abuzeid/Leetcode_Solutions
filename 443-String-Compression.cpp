#include<string>
class Solution {
public:
    int compress(vector<char>& chars) {
        int i =0 ,a=1;
        for (int o = 1;o<chars.size();o++)
        {
            if(chars[i]==chars[o])
                a++;
            else if(a>1)
            {
                string temp =   to_string(a);
                i++;
                int temp2=0;
                while(temp2<temp.length()){
                    chars[i]=temp[temp2];
                    i++;
                    temp2++;
                }
                chars[i]=chars[o];
                a=1;
            }
            else 
            {
                i++;
                chars[i]=chars[o];
            }
        }
        if(a>1)
        {
            string temp =   to_string(a);
                i++;
                int temp2=0;
                while(temp2<temp.length()){
                    chars[i]=temp[temp2];
                    i++;
                    temp2++;
                }
            a==0;
        }
        if(a==1)
            return i+1;
        else
            return i;
    }
};