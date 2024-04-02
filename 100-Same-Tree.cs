public class Solution
{
    List<int> ans;
    bool build(TreeNode a,TreeNode b)
    {
        if(a== null&&b==null) return true;
        if(a== null||b==null) return false;
        return (a.val==b.val&&build(a.right,b.right)&&build(a.left,b.left));
    }
    public bool IsSameTree(TreeNode a,TreeNode b)
    {
        ans = new List<int> ();
        return build(a,b);
    }
}