/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return \t     -1 if num is higher than the picked number
 *\t\t\t      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

public class Solution : GuessGame {
    public int GuessNumber(int n)
{
    int i = 1, o = n, mid;
    while (i <=o) {
        Console.WriteLine(\a\+i+\ \+o);
        mid =i+(o - i) / 2;
        int a=guess(mid);
        if (a == 0)
            return mid;
        else if (a == 1)
            i = mid + 1;
        else o = mid - 1;
    }
    return 0;
}
}