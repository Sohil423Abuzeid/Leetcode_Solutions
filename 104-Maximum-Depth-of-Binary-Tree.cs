public class Solution
{
    List<int> ans;
    int build(TreeNode t)
    {
        if(t== null) return 0;
        ans.Add(t.val);
        return 1+ Math.Max(build(t.right),build(t.left));
    }
    public int MaxDepth(TreeNode root)
    {
        ans = new List<int> ();
        return build(root);
    }
}