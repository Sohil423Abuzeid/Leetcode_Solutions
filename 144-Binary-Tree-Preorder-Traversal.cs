public class Solution
{
    List<int> ans;
    void build(TreeNode t)
    {
        if(t== null) return;
        ans.Add(t.val);
        build(t.left);
        build(t.right);
       
    }
    public IList<int> PreorderTraversal(TreeNode root)
    {
        ans = new List<int> ();
        build(root);
        return ans;
    }
}