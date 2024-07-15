class Solution {
public:
    int characterReplacement(string s, int k) {

 int ans = 0;
 char anss;
for (char ch= 'A'; ch <='Z'; ch++)
{
\tint a = 0, b = 0,c=0;
\twhile (b < s.length())
\t{
\t\tif (s[b] != ch)
\t\t\tc++;
\t\twhile (c>k)
\t\t{
\t\t\tif (s[a] != ch)
\t\t\t\tc--;
\t\t\ta++;
\t\t}
\t\tif (b - a + 1 > ans)
\t\t{
\t\t\tanss = ch;
\t\t\tans = b - a + 1;
\t\t}
\t\tb++;
\t}
}
return ans;
    }
};