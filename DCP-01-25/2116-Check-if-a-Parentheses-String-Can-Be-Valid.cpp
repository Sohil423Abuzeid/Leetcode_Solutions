class Solution {
public:
    bool canBeValid(string s, string locked) {
          if(s.size()%2==1)return false;
          int a=0,b=0;
          for(int i =0 ;i<s.size() ; i++)
          {
            if(locked[i]=='0')
                {
                    a++;
                    if(b>0)
                    {
                        b--;
                        a++;
                    }
                }
            else if(s[i]=='(')
                b++;
            else if(b>0)
                b--;
            else if(a>0)
                a--;
            else
                return false;
          }
          return (b==0);
    }
};