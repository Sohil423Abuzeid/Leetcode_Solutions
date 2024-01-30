public class Solution
{
    private bool ValidPalindrome(int i ,int o,string s)
    {
        while (i < o)
        {
            if (s[i] != s[o])return false;
            i++;
            o--;
        }
        return true;
    }
    public bool ValidPalindrome(string s)
    {
        int i=0, o=s.Length-1;
        while (i<o){
            if (s[i] != s[o])return ValidPalindrome(i,o-1,s)|| ValidPalindrome(i+1,o,s);
            i++;
            o--;
        }
        return true;
    }
}