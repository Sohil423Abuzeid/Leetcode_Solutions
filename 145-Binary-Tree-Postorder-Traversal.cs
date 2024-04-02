public class Solution
{
    List<int> ans;
    void build(TreeNode t)
    {
        if(t== null) return;
        build(t.left);
        build(t.right);
        ans.Add(t.val);
    }
    public IList<int> PostorderTraversal(TreeNode root)
    {
        ans = new List<int> ();
        build(root);
        return ans;
    }
}